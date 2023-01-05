#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  uint32_t values[10000];
  uint16_t nextIndex;
} Stack;

void stack_initialize(Stack *s) {
  s->nextIndex = 0;
}

void stack_push(Stack *s, uint32_t n) {
  s->values[s->nextIndex] = n;
  s->nextIndex ++;
}

int32_t stack_pop(Stack *s) {
  if (!s->nextIndex) {
    return -1;
  }

  s->nextIndex --;

  return s->values[s->nextIndex];
}

uint16_t stack_size(Stack *s) {
  return s->nextIndex;
}

unsigned stack_empty(Stack *s) {
  return s->nextIndex == 0;
}

int32_t stack_top(Stack *s) {
  if (!s->nextIndex) {
    return -1;
  }

  return s->values[s->nextIndex - 1];
}

int main() {
  Stack s;
  uint32_t N;
  uint32_t i;
  char command[6];
  uint32_t argument;

  stack_initialize(&s);

  scanf("%u", &N);

  for (i = 0; i < N; i ++) {
    scanf("%s", command);

    if (!strcmp(command, "push")) {
      scanf("%u", &argument);
      stack_push(&s, argument);

    } else if (!strcmp(command, "pop")) {
      printf("%d\n", stack_pop(&s));

    } else if (!strcmp(command, "size")) {
      printf("%d\n", stack_size(&s));

    } else if (!strcmp(command, "empty")) {
      printf("%u\n", stack_empty(&s));

    } else {
      printf("%d\n", stack_top(&s));
    }
  }

  return 0;
}

