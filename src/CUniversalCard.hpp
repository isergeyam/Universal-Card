//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARD_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARD_HPP
#include <memory>
#include "CPassport.hpp"
#include "CInsurance.hpp"
#include "CBankCard.hpp"
/// Universal Card storage class
class CUniversalCard {
 private:
  std::string m_name;
  std::string m_bank_name;
  uint64_t  m_passport_id;
  uint64_t m_insurance_id;
  uint64_t m_bank_card_id;
  friend class CDecryptUniversalCard;
 public:
  bool operator==(const CUniversalCard &rhs) const;
  bool operator!=(const CUniversalCard &rhs) const;
 public:
  /**
   * @brief constructs universal card
   * @param m_name user name
   * @param m_bank_name bank name
   * @param m_passport_id passport id
   * @param m_insurance_id insurance id
   * @param m_bank_card_id bank card id
   */
  CUniversalCard(const std::string &m_name,
                 const std::string &m_bank_name,
                 uint64_t m_passport_id,
                 uint64_t m_insurance_id,
                 uint64_t m_bank_card_id);
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARD_HPP
