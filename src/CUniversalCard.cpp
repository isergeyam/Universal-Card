//
// Created by sg on 08.04.18.
//

#include "CUniversalCard.hpp"
CUniversalCard::CUniversalCard(const std::shared_ptr<CPassport> &m_passport,
                               const std::shared_ptr<CBankCard> &m_bank_card,
                               const std::shared_ptr<CInsurance> &m_insurance)
    : m_passport(m_passport), m_bank_card(m_bank_card), m_insurance(m_insurance) {}
const std::shared_ptr<CPassport> &CUniversalCard::getM_passport() const {
  return m_passport;
}
const std::shared_ptr<CBankCard> &CUniversalCard::getM_bank_card() const {
  return m_bank_card;
}
const std::shared_ptr<CInsurance> &CUniversalCard::getM_insurance() const {
  return m_insurance;
}
