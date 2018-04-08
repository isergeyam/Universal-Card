//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CINSURANCE_HPP
#define UNIVERSAL_CARD_CINSURANCE_HPP
#include <string>
/// Insurance storage class
class CInsurance {
 private:
  std::string m_name;
  uint64_t m_insurance_id;
 public:
  /**
   * @brief constructs insurance
   * @param m_name user name
   * @param m_insurance_id insurance id
   */
  CInsurance(const std::string &m_name, uint64_t m_insurance_id);
  const std::string &getM_name() const;
  uint64_t getM_insurance_id() const;
  bool operator==(const CInsurance &rhs) const;
  bool operator!=(const CInsurance &rhs) const;
};

#endif //UNIVERSAL_CARD_CINSURANCE_HPP
