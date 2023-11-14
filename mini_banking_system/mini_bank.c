#include "../mini_bank_system/mini_bank.h"

static struct customer add_info();
void add_customer(struct customer **head) {
  struct customer *node;
  node = (customer_t *)malloc(sizeof(customer_t));

  printf("enter your age ");
  int a = 0;
  scanf("%d", &a);
  node->age = a;
  if (*head == NULL) {
    (*head) = node;
    (*head)->ptr_next = NULL;

  } else {
    node->ptr_next = (*head);
    (*head) = node;
  }
}

static struct customer add_info() {
  struct customer node;
  printf("enter your age ");
  scanf("%d", &(node.age));

  return node;
}