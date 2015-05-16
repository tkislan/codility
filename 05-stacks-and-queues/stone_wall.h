#include <stack>

int solution(vector<int> &H) {
  stack<int> s;

  int result = 1;

  s.push(H.front());

  for (size_t i = 1; i < H.size(); ++i) {
    while (!s.empty() && s.top() > H[i]) s.pop();

    if (s.empty() || s.top() != H[i]) {
      s.push(H[i]);
      ++result;
    }
  }

  return result;
}
