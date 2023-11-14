#ifndef __MINI_BANK__H_
#define __MINI_BANK__H_

/*includes */
#include <stdio.h>
#include <stdlib.h>

/*macros*/
/*user define data types */
typedef struct customer {
  //   char arr_name[20] ;
  int age;
  // int arr_data_birth[11] ;
  // int money_got ;
  // int customer_id;
  struct customer *ptr_next;
} customer_t;

typedef enum {
  ret_not_ok,
  ret_ok,

} std_return_t;
/*fucntion like macros */
/*function prototypes*/
void add_customer(struct customer **head);
std_return_t delet_customer(struct customer *customer_id);
std_return_t show_customers_data(struct customer *custumor);
std_return_t menu();

#endif