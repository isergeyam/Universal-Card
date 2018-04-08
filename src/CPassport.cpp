//
// Created by sg on 07.04.18.
//

#include "CPassport.hpp"
CPassport::CPassport(const std::string &m_name, uint64_t m_passport_id) : m_name(m_name), m_passport_id(m_passport_id) {}
const std::string &CPassport::getM_name() const {
  return m_name;
}
uint64_t CPassport::getM_passport_id() const {
  return m_passport_id;
}
