//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CDECRYPTCARD_HPP
#define UNIVERSAL_CARD_CDECRYPTCARD_HPP

#include "CUniversalCard.hpp"
/// Universal card decryptor
class CDecryptUniversalCard {
 public:
  /**
   * \brief Decrypt universal card data with the given code
   * \details Function decrypts card data, obtained from CardReader
   * @param [in,out] card data buffer
   * @param [in] code code to apply on the data
   */
  static void Decrypt(void *buffer, uint64_t code);
};

#endif //UNIVERSAL_CARD_CDECRYPTCARD_HPP
