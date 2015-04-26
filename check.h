#ifndef CHECK_H
#define CHECK_H

#include <iostream>
#include <vector>

static int test_ret = 0;

std::ostream &operator<<(std::ostream &os, const std::vector<int> &v) {
  os << "{ ";
  for (int n : v) {
    os << n << ", ";
  }
  os << "}";
  return os;
}

#define CHECK(func, expected_value) {\
  auto ret = func; \
  if (ret != expected_value) { \
    std::cout << #func << " expanded to " << ret << ", expected value was " << #expected_value << std::endl; \
    test_ret = -1; \
  } \
} \

#endif // CHECK_H
