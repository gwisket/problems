#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
  bool carry;
  int *result;
  unsigned i;

  carry = true;
  for (i = digitsSize; i != 0; i --) {
    digits[i - 1] += carry;

    if (digits[i - 1] > 9) {
      digits[i - 1] -= 10;
      carry = true;
    } else {
      carry = false;
    }
  }

  *returnSize = digitsSize + carry;
  result = calloc(*returnSize, sizeof(int));

  memcpy(result + carry, digits, sizeof(int) * digitsSize);

  if (carry) {
    result[0] = 1;
  }

  return result;
}

