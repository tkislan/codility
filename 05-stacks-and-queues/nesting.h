int solution(string &S) {
  int left_brackets = 0;

  for (char c : S) {
    switch (c) {
      case '(':
        ++left_brackets;
        break;
      case ')':
        if (left_brackets <= 0) return 0;
        --left_brackets;
        break;
    }
  }

  if (left_brackets != 0) return 0;

  return 1;
}
