#include <stdint.h>
#include <stdbool.h>

void used_checker_mark(used_checker_t *used_checker, char c) {
  c -= ' ';

  used_checker->arr[c / 32] |= ((unsigned) 1 << (c % 32));
}

bool used_checker_marked(used_checker_t *used_checker, char c) {
  c -= ' ';

  return used_checker->arr[c / 32] & ((unsigned) 1 << (c % 32));
}

int lengthOfLongestSubstring(char *s) {
  int maxLength;
  int i;
  int j;
  uint32_t arr[3];
  
  maxLength = 0;
  for (i = 0; s[i]; i ++) {
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    used_checker_mark(&used_checker, s[i]);

    for (j = i + 1; s[j] && !used_checker_marked(&used_checker, s[j]); j ++) {
      used_checker_mark(&used_checker, s[j]);
    }

    if (j - i > maxLength) {
      maxLength = j - i;
    }
  }

  return maxLength;
}

