#include <stack>

int solution(vector<int> &H) {
  stack<int> s;

  int result = 0;

  for (int n : H) {
    while (!s.empty() && s.top() > n) s.pop();

    if (s.empty() || s.top() != n) {
      s.push(n);
      ++result;
    }
  }

  return result;
}
