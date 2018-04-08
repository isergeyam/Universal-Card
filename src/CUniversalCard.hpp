//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARD_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARD_HPP
#include <memory>
#include "CPassport.hpp"
#include "CInsurance.hpp"
#include "CBankCard.hpp"
class CUniversalCard {
 public:
  CUniversalCard(const std::shared_ptr<CPassport> &m_passport,
                 const std::shared_ptr<CBankCard> &m_bank_card,
                 const std::shared_ptr<CInsurance> &m_insurance);
  const std::shared_ptr<CPassport> &getM_passport() const;
  const std::shared_ptr<CBankCard> &getM_bank_card() const;
  const std::shared_ptr<CInsurance> &getM_insurance() const;
  friend class CDecryptUniversalCard;
 private:
  std::shared_ptr<CPassport> m_passport;
  std::shared_ptr<CBankCard> m_bank_card;
  std::shared_ptr<CInsurance> m_insurance;
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARD_HPP
