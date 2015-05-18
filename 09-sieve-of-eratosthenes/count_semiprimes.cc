using namespace std;

#include <vector>

#include "check.h"

#include "count_semiprimes.h"

int main() {
  vector<int> input_p1 { 1, 4, 16 }, input_q1 { 26, 10, 20 }, output1 { 10, 4, 0 };
  CHECK(solution(26, input_p1, input_q1), output1);

  return test_ret;
}
