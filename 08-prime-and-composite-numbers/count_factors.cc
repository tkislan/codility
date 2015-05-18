using namespace std;

#include <limits>

#include "check.h"

#include "count_factors.h"

int main() {
  CHECK(solution(24), 8);

  CHECK(solution(25), 3);

  CHECK(solution(1000000000), 100);

  CHECK(solution(2147395600), 163);

  CHECK(solution(std::numeric_limits<int>::max()), 2);

  return test_ret;
}
