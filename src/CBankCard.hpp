//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CBANKCARD_HPP
#define UNIVERSAL_CARD_CBANKCARD_HPP
#include <string>
class CBankCard {
 public:
  CBankCard(const std::string &m_bank_name,
            uint64_t m_card_id,
            const std::string &m_name);
 private:
  std::string m_name;
  std::string m_bank_name;
  uint64_t m_card_id;
};

#endif //UNIVERSAL_CARD_CBANKCARD_HPP
