//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#include "CUniversalCard.hpp"
class CUniversalCardFactory {
 public:
  CUniversalCard* Create(CPassport *m_passport, CInsurance *m_insurance, CBankCard *m_bank_card);
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
