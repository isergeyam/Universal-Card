//
// Created by sg on 07.04.18.
//

#ifndef UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
#define UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
#include "CChipCardReader.hpp"
#include "CDecryptUniversalCard.hpp"
#include "CPassport.hpp"
#include "CInsurance.hpp"
#include "CBankCard.hpp"
#include "CUniversalCardFactory.hpp"
#include <memory>
/// Universal Card Reader (decorates card reader)
class CUniversalCardReader : public ICardReader {
 private:
  std::shared_ptr<ICardReader> m_instance;
  CUniversalCardFactory m_factory;
  void* _M_Read_Card(uintptr_t begin, uintptr_t end);
 public:
  /**
   * @brief constructs reader, using the given one.
   * @param m_instance instance of the reader to be decorated
   */
  explicit CUniversalCardReader(const std::shared_ptr<ICardReader> &m_instance);
  ReadCardStatus ReadCard(uintptr_t begin, uintptr_t end, void *output_buffer) override ;
  /**
   * @brief Read universal card
   * @return universal card read
   */
  std::shared_ptr<CUniversalCard> GetUniversalCard();
  /**
   * @brief Read passport
   * @return passport read
   */
  std::shared_ptr<CPassport> GetPassport();
  /**
   * @brief Read insurance
   * @return insurance read
   */
  std::shared_ptr<CInsurance> GetInsurance();
  /**
   * @brief Read bank card
   * @return bank card read
   */
  std::shared_ptr<CBankCard> GetBankCard();
};

#endif //UNIVERSAL_CARD_CUNIVERSALCARDREADER_HPP
