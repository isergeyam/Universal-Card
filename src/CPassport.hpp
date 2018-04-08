//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CPASSPORT_HPP
#define UNIVERSAL_CARD_CPASSPORT_HPP
#include <string>
/// Passport storage class
class CPassport {
 public:
  /**
   * @brief constructs passport
   * @param m_name user name
   * @param m_passport_id passport id
   */
  CPassport(const std::string &m_name, uint64_t m_passport_id);
  const std::string &getM_name() const;
  uint64_t getM_passport_id() const;
  bool operator==(const CPassport &rhs) const;
  bool operator!=(const CPassport &rhs) const;
 private:
  std::string m_name;
  uint64_t m_passport_id;
};

#endif //UNIVERSAL_CARD_CPASSPORT_HPP
