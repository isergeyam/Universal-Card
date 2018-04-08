//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CPASSPORT_HPP
#define UNIVERSAL_CARD_CPASSPORT_HPP
#include <string>
class CPassport {
 public:
  CPassport(const std::string &m_name, uint64_t m_passport_id);
  const std::string &getM_name() const;
  uint64_t getM_passport_id() const;
 private:
  std::string m_name;
  uint64_t m_passport_id;
};

#endif //UNIVERSAL_CARD_CPASSPORT_HPP
