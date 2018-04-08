//
// Created by sg on 07.04.18.
//

#include "CBankCard.hpp"
CBankCard::CBankCard(const std::string &m_bank_name,
                     uint64_t m_card_id,
                     const std::string &m_name)
    : m_bank_name(m_bank_name), m_card_id(m_card_id), m_name(m_name) {}
const std::string &CBankCard::getM_name() const {
  return m_name;
}
const std::string &CBankCard::getM_bank_name() const {
  return m_bank_name;
}
uint64_t CBankCard::getM_card_id() const {
  return m_card_id;
}
