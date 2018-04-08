//
// Created by sg on 07.04.18.
//

#include "CInsurance.hpp"
CInsurance::CInsurance(const std::string &m_name, uint64_t m_insurance_id)
    : m_name(m_name), m_insurance_id(m_insurance_id) {}
const std::string &CInsurance::getM_name() const {
  return m_name;
}
uint64_t CInsurance::getM_insurance_id() const {
  return m_insurance_id;
}
bool CInsurance::operator==(const CInsurance &rhs) const {
  return m_name==rhs.m_name &&
      m_insurance_id==rhs.m_insurance_id;
}
bool CInsurance::operator!=(const CInsurance &rhs) const {
  return !(rhs==*this);
}
