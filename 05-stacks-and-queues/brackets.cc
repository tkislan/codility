using namespace std;

#include <string>

#include "check.h"

#include "brackets.h"

int main() {
  string input { "{[()()]}" };
  CHECK(solution(input), 1);

  string input2 { "([)()]" };
  CHECK(solution(input2), 0);

  return test_ret;
}
