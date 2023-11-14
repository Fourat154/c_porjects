#include "mini_bank.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  customer_t *head = NULL;

  add_customer(&head);
  add_customer(&head);
  add_customer(&head);
  search_customer(&head, 110200);

  return 0;
}