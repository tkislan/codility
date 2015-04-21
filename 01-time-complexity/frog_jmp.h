#ifndef FROG_JMP_H
#define FROG_JMP_H

#include <cmath>

int solution(int X, int Y, int D) {
  return ceil(static_cast<double>(Y - X) / static_cast<double>(D));
}

#endif // FROG_JMP_H

