// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"



bool checkPrime(uint64_t value) {
// вставьте код функции
  for (uint64_t i = 1; round(sqrt(value)) + 1; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t i = 2, k = 0;
  while (true) {
    if (checkPrime(i))
      k++;
    if (k == n)
      return i;
    i++;
  }
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t i = value + 1;
  while (true) {
    if (checkPrime(i))
      return i;
    i++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t i = 2, sum = 0;
  while (hbound != i) {
    if (checkPrime(i))
      sum += i;
    i++;
  }
  return sum;
}
