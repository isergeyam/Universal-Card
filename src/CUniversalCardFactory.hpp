//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#include "CUniversalCard.hpp"
class CUniversalCardFactory {
 public:
  std::shared_ptr<CUniversalCard> Create(const CPassport &m_passport,
                                         const CInsurance &m_insurance,
                                         const CBankCard &m_bank_card);
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
