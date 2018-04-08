//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CBANKCARD_HPP
#define UNIVERSAL_CARD_CBANKCARD_HPP
#include <string>
/// Bank Card storage class
class CBankCard {
 public:
  /**
   * @brief constructs Bank Card
   * @param [in] m_bank_name bank name
   * @param [in] m_card_id card id
   * @param [in] m_name user name
   */
  CBankCard(const std::string &m_bank_name,
            uint64_t m_card_id,
            const std::string &m_name);
  const std::string &getM_name() const;
  const std::string &getM_bank_name() const;
  uint64_t getM_card_id() const;
  bool operator==(const CBankCard &rhs) const;
  bool operator!=(const CBankCard &rhs) const;
 private:
  std::string m_bank_name;
  uint64_t m_card_id;
  std::string m_name;
};

#endif //UNIVERSAL_CARD_CBANKCARD_HPP
