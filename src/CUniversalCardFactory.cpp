//
// Created by sg on 08.04.18.
//

#include "CUniversalCardFactory.hpp"
std::shared_ptr<CUniversalCard> CUniversalCardFactory::Create(const CPassport &m_passport,
                                                              const CInsurance &m_insurance,
                                                              const CBankCard &m_bank_card) {
  if (m_passport.getM_name()!=m_insurance.getM_name() || m_passport.getM_name()!=m_insurance.getM_name())
    return nullptr;
  return std::make_shared<CUniversalCard>(m_passport.getM_name(), m_bank_card.getM_bank_name(), m_passport.getM_passport_id(),
                            m_insurance.getM_insurance_id(), m_bank_card.getM_card_id());
}
