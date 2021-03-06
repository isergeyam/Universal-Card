//
// Created by sg on 07.04.18.
//

#include "CUniversalCardReader.hpp"
CUniversalCardReader::CUniversalCardReader(const std::shared_ptr<ICardReader> &m_instance) : m_instance(m_instance) {}
ICardReader::ReadCardStatus CUniversalCardReader::ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) {
  ReadCardStatus m_ans = m_instance->ReadCard(begin, end, output_buffer);
  if (m_ans != OK)
    return m_ans;
  CDecryptUniversalCard::Decrypt(output_buffer, 0);
  return m_ans;
}
std::shared_ptr<CPassport> CUniversalCardReader::GetPassport() {
  return std::shared_ptr<CPassport>(reinterpret_cast<CPassport*>(_M_Read_Card(0, sizeof(CPassport))));
}
std::shared_ptr<CInsurance> CUniversalCardReader::GetInsurance() {
  uintptr_t begin = sizeof(CPassport);
  return std::shared_ptr<CInsurance>(reinterpret_cast<CInsurance*>(_M_Read_Card(begin, begin+sizeof(CInsurance))));
}
void *CUniversalCardReader::_M_Read_Card(uintptr_t begin, uintptr_t end) {
  void *ans = operator new(end-begin);
  ReadCard(begin, end, ans);
  return ans;
}
std::shared_ptr<CBankCard> CUniversalCardReader::GetBankCard() {
  uintptr_t begin = sizeof(CPassport) + sizeof(CInsurance);
  return std::shared_ptr<CBankCard>(reinterpret_cast<CBankCard*>(_M_Read_Card(begin, begin+sizeof(CBankCard))));
}
std::shared_ptr<CUniversalCard> CUniversalCardReader::GetUniversalCard() {
  return m_factory.Create(*GetPassport(), *GetInsurance(), *GetBankCard());
}
