int solution(string &S) {
  if (S.empty()) return 1;

  string b;
  b.reserve(S.size());

  for (char c : S) {
    switch (c) {
      case '(':
      case '[':
      case '{':
        b.push_back(c);
        break;
      case ')':
        if (b.empty()) return 0;
        if (b.back() != '(') return 0;
        b.pop_back();
        break;
      case ']':
        if (b.empty()) return 0;
        if (b.back() != '[') return 0;
        b.pop_back();
        break;
      case '}':
        if (b.empty()) return 0;
        if (b.back() != '{') return 0;
        b.pop_back();
        break;
    }
  }

  if (!b.empty()) return 0;

  return 1;
}
