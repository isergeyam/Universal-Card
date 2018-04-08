//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
#include "CChipCardReader.hpp"
#include "CDecryptUniversalCard.hpp"
#include "CPassport.hpp"
#include "CInsurance.hpp"
#include "CBankCard.hpp"
#include "CUniversalCardFactory.hpp"
#include <memory>
class CUniversalCardReader : public ICardReader {
 private:
  std::shared_ptr<ICardReader> m_instance;
  CUniversalCardFactory m_factory;
  void* _M_Read_Card(uintptr_t begin, uintptr_t end);
 public:
  explicit CUniversalCardReader(const std::shared_ptr<ICardReader> &m_instance);
  ReadCardStatus ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) override ;
  CUniversalCard* GetUniversalCard();
  CPassport* GetPassport();
  CInsurance* GetInsurance();
  CBankCard* GetBankCard();
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
