#include "mini_bank.h"

static int ID = 110200;
static void add_info(struct customer **node);

void add_customer(customer_t **head) {
  customer_t *node;
  node = (customer_t *)malloc(sizeof(customer_t));

  printf("enter customer data \n");
  add_info(&node);

  if (*head == NULL) {
    (*head) = node;
    (*head)->ptr_next = NULL;

  } else {
    node->ptr_next = (*head);
    (*head) = node;
  }
}

static void add_info(struct customer **node) {
  printf("enter customer name ");
  fflush(stdin);
  gets((*node)->arr_name);

  printf("enter customer age ");
  scanf("%d", &(*node)->age);
  (*node)->customer_id = ID;
  ID++;

  printf("enter money amount ");
  scanf("%d", &(*node)->money);
}

void search_customer(struct customer **head, int id) {
  customer_t *temp = *head;
  while (temp != NULL) {
    if (temp->customer_id == id) {
      printf("%s\n", temp->arr_name);
      printf("%d \n", temp->age);
      printf("%d\n", temp->money);
      printf("%d\n", temp->customer_id);
      printf("\n");
      break;
    }
    temp = temp->ptr_next;
  }
}