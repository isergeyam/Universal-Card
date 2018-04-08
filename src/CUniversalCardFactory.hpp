//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
#include "CUniversalCard.hpp"
///Factory for universal cards
class CUniversalCardFactory {
 public:
  /**
   * @brief Constructs universal card from passport, insurance and bank card
   * @param m_passport
   * @param m_insurance
   * @param m_bank_card
   * @return pointer to constructed universal card. Nullptr if the input is invalid
   */
  std::shared_ptr<CUniversalCard> Create(const CPassport &m_passport,
                                         const CInsurance &m_insurance,
                                         const CBankCard &m_bank_card);
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDFACTORY_HPP
