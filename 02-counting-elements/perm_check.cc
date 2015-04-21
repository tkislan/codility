using namespace std;

#include <vector>

#include "perm_check.h"

int main() {
  vector<int> input1{ 4, 1, 3, 2 };
  vector<int> input2{ 4, 1, 3 };

  if (solution(input1) != 1) return -1;
  if (solution(input2) != 0) return -1;

  return 0;
}
