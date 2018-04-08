//
// Created by sg on 05.04.18.
//

#ifndef UNIVERSAL_CARD_CCHIPCARD_HPP
#define UNIVERSAL_CARD_CCHIPCARD_HPP

#include <iostream>
#include "ICardReader.hpp"
#include <cstring>
/// Third party chip card reader
class CChipCardReader : public ICardReader  {
 public:
  using device_t = void*;
 private:
  device_t m_reader;
 public:
  /**
   * \brief Construct chip card reader.
   * @param[in] m_reader pointer to reader device bus
   */
  explicit CChipCardReader(device_t m_reader);
  ReadCardStatus ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) override ;
};

#endif //UNIVERSAL_CARD_CCHIPCARD_HPP
