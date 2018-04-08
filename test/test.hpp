//
// Created by sg on 08.04.18.
//

#ifndef UNIVERSAL_CARD_TEST_HPP
#define UNIVERSAL_CARD_TEST_HPP
#include <gtest/gtest.h>
#include "../src/CUniversalCardReader.hpp"
TEST(CDecryptUniversalCardTest, Decrypt) {
  CUniversalCard m_card1("Name", "Bank", 1, 2, 3);
  CUniversalCard m_card2(m_card1);
  CDecryptUniversalCard::Decrypt(&m_card2, 0);
  EXPECT_EQ(m_card1, m_card2);
  CDecryptUniversalCard::Decrypt(&m_card2, 1);
  EXPECT_NE(m_card1, m_card2);
}
class CUniversalCardReaderTest : public ::testing::Test{
 public:
  std::shared_ptr<CUniversalCardReader> m_reader;
  std::shared_ptr<CChipCardReader> m_instance_reader;
  CPassport *m_passport;
  CInsurance *m_insurance;
  CBankCard *m_bank_card;
  std::shared_ptr<CUniversalCard> m_card;
  CUniversalCardFactory m_factory;
  void *m_buffer;
  CUniversalCardReaderTest() {
    m_buffer = operator new(sizeof(CPassport) + sizeof(CInsurance) + sizeof(CBankCard));
    m_passport = new (m_buffer) CPassport("Name", 1);
    m_insurance = new(reinterpret_cast<char*>(m_buffer) + sizeof(CPassport)) CInsurance("Name", 2);
    m_bank_card = new(reinterpret_cast<char*>(m_insurance) + sizeof(CInsurance)) CBankCard("Bank", 3, "Name");
    m_card = m_factory.Create(*m_passport, *m_insurance, *m_bank_card);
    m_instance_reader = std::make_shared<CChipCardReader>(m_buffer);
    m_reader = std::make_shared<CUniversalCardReader>(std::shared_ptr<ICardReader>(m_instance_reader));
  }
  virtual ~CUniversalCardReaderTest() {
    operator delete (m_buffer);
  }
};
TEST_F(CUniversalCardReaderTest, GetPassport) {
  auto n_passport = m_reader->GetPassport();
  EXPECT_EQ(*m_passport, *n_passport);
}
TEST_F(CUniversalCardReaderTest, GetInsurance) {
  auto n_insurance = m_reader->GetInsurance();
  EXPECT_EQ(*m_insurance, *n_insurance);
}
TEST_F(CUniversalCardReaderTest, GetBankCard) {
  auto n_bank_card = m_reader->GetBankCard();
  EXPECT_EQ(*m_bank_card, *n_bank_card);
}
TEST_F(CUniversalCardReaderTest, GetUniversalCard) {
  auto n_card = m_reader->GetUniversalCard();
  EXPECT_EQ(*m_card, *n_card);
}
#endif //UNIVERSAL_CARD_TEST_HPP
