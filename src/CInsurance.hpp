//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CINSURANCE_HPP
#define UNIVERSAL_CARD_CINSURANCE_HPP
#include <string>
class CInsurance {
 private:
  std::string m_name;
  uint64_t m_insurance_id;
 public:
  CInsurance(const std::string &m_name, uint64_t m_insurance_id);
};

#endif //UNIVERSAL_CARD_CINSURANCE_HPP
