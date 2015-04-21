using namespace std;

#include <vector>

#include "tape_equilibrium.h"

int main() {
  vector<int> input{ 3, 1, 2, 4, 3 };
  if (solution(input) != 1) return -1;

  return 0;
}
