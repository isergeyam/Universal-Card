//
// Created by sg on 08.04.18.
//

#include "CUniversalCard.hpp"
CUniversalCard::CUniversalCard(const std::string &m_name,
                               const std::string &m_bank_name,
                               uint64_t m_passport_id,
                               uint64_t m_insurance_id,
                               uint64_t m_bank_card_id)
    : m_name(m_name),
      m_bank_name(m_bank_name),
      m_passport_id(m_passport_id),
      m_insurance_id(m_insurance_id),
      m_bank_card_id(m_bank_card_id) {}
