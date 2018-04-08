//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#include "CUniversalCard.hpp"
class CUniversalCardFactory {
 public:
  CUniversalCard* Create(CPassport *m_passport, CInsurance *m_insurance, CBankCard *m_bank_card) {
    if (m_passport->getM_name()!=m_insurance->getM_name() || m_passport->getM_name()!=m_insurance->getM_name())
      return nullptr;
    return new CUniversalCard(m_passport->getM_name(), m_bank_card->getM_bank_name(), m_passport->getM_passport_id(),
                              m_insurance->getM_insurance_id(), m_bank_card->getM_card_id());
  }
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
