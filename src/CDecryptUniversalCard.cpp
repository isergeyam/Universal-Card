//
// Created by sg on 07.04.18.
//

#include "CDecryptUniversalCard.hpp"
void CDecryptUniversalCard::Decrypt(void *buffer, uint64_t code) {
  //Decryptor stub
  auto m_card = reinterpret_cast<CUniversalCard*>(buffer);
  if(code != 0)
    m_card->m_name.clear(); // invalid encoding stub
}
