//
// Created by sg on 05.04.18.
//

#include "CChipCardReader.hpp"
CChipCardReader::ReadCardStatus CChipCardReader::ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) {
  if (m_reader==nullptr)
    return DEVICE_CONNECTION_FAILED;
  // device interacting stub
  std::memcpy(output_buffer, reinterpret_cast<char*>(m_reader)+begin, end-begin);
  return OK;
}
CChipCardReader::CChipCardReader(device_t m_reader) : m_reader(m_reader) {}
