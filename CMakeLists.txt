cmake_minimum_required(VERSION 3.8)
project(Universal_Card)

set(CMAKE_CXX_STANDARD 14)
include_directories(third_party)
set(SOURCE_FILES main.cpp third_party/CChipCardReader.cpp third_party/CChipCardReader.hpp src/CUniversalCardReader.cpp src/CUniversalCardReader.hpp third_party/ICardReader.cpp third_party/ICardReader.hpp src/CDecryptUniversalCard.cpp src/CDecryptUniversalCard.hpp src/CPassport.cpp src/CPassport.hpp src/CInsurance.cpp src/CInsurance.hpp src/CBankCard.cpp src/CBankCard.hpp)
add_executable(Universal_Card ${SOURCE_FILES})