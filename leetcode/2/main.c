#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
  struct ListNode *head1 = l1;
  struct ListNode *head2 = l2;
  struct ListNode *slow;
  bool carry;

  carry = false;
  while (l1 && l2) {
    l1->val += l2->val + carry;

    if (l1->val > 9) {
      l1->val -= 10;
      carry = true;
    } else {
      carry = false;
    }

    slow = l1;
    l1 = l1->next;
    l2 = l2->next;
  }

  if (l2) {
    slow->next = l2;
  }
  l1 = slow->next;

  while (l1) {
    l1->val += carry;

    if (l1->val > 9) {
      l1->val -= 10;
      carry = true;
    } else {
      carry = false;
    }

    slow = l1;
    l1 = l1->next;
  }

  if (carry) {
    slow->next = head2;
    slow->next->val = 1;
    slow->next->next = NULL;
  }

  return head1;
}
