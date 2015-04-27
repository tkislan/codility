#include <set>

int solution(vector<int> &A) {
  set<int> s;

  for (int n : A) s.insert(n);

  return s.size();
}
