using namespace std;

#include "check.h"
#include "count_div.h"

int main() {
  CHECK(solution(6, 11, 2), 3);
  CHECK(solution(5, 11, 2), 3);
  CHECK(solution(5, 5, 2), 0);
  CHECK(solution(5, 6, 2), 1);
  CHECK(solution(3, 6, 3), 2);
  CHECK(solution(3, 9, 3), 3);
  CHECK(solution(4, 12, 4), 3);
  CHECK(solution(4, 13, 4), 3);
  CHECK(solution(4, 14, 4), 3);
  CHECK(solution(4, 15, 4), 3);
  CHECK(solution(5, 15, 4), 2);

  return test_ret;
}