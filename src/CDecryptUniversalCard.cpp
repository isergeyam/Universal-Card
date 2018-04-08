//
// Created by sg on 07.04.18.
//

#include "CDecryptUniversalCard.hpp"
void CDecryptUniversalCard::Decrypt(void *buffer, uint64_t code) {
  //Decryptor stub
  CUniversalCard *m_card = reinterpret_cast<CUniversalCard*>(buffer);
  if (code != 0)
    m_card->m_bank_card=nullptr; //invalid encoding stub
}
