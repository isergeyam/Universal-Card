//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_ICARDREADER_HPP
#define UNIVERSAL_CARD_ICARDREADER_HPP

#include <cstdint>
/// A third party card reader interface
class ICardReader {
 public:
  /// Read card status
  enum ReadCardStatus{
    OK, ///< no errors
    DEVICE_CONNECTION_FAILED, ///< can't connect to device via given bus
    READ_FAILED_NOCARD, ///< can't read card because there is nothing to read
    READ_FAILED_UNKNOWN ///< unknown error while reading a card
  };
/**
   * \brief Reads Card Data
   * \details This function reads data from the card
   * @param[in] begin the pointer to start reading on
   * @param[in] end the pointer to end reading on
   * @param[out] output_buffer buffer, where to store the result
   * \return Reading status code
   */
  virtual ReadCardStatus ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) = 0;
  virtual ~ICardReader() = default;
};

#endif //UNIVERSAL_CARD_ICARDREADER_HPP
