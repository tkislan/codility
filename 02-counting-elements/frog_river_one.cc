using namespace std;

#include <vector>

#include "frog_river_one.h"

int main() {
  vector<int> input{ 1, 3, 1, 4, 2, 3, 5, 4 };
  if (solution(5, input) != 6) return -1;

  return 0;
}
