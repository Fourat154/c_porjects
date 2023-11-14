#include "stdio.h"
#include <stdlib.h.>
 
void move(int arr[3][3], int rol);
int calculate(int arr[3][3]);

int x = 6;
char flag = 1;
int arr[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
char front[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};


int main() {
    printf("game is starting..........\n");
    while (x--) {
     printf("\n%10c|", front[0][0]) ; 
     printf("%10c|",front[0][1]) ;
    printf("%10c|",  front[0][2]);
    printf("\n");
   printf("         -------------------------");
   printf("\n");
   printf("%10c|",front[1][0]) ; 
   printf("%10c|",front[1][1]) ;
   printf("%10c|",front[1][2]);
    printf("\n");
   printf("         -------------------------");
      printf("\n");
   printf("%10c|",front[2][0]) ; 
   printf("%10c|",front[2][1]) ;
   printf("%10c|",front[2][2]);
    if (flag) {
      move(arr, 1);
      flag = 0;
    } else if (!flag) {
     move(arr, 2);
      flag = 1;
    }
    if (x <= 2) {
      int ret = calculate(arr);
      if (ret == 1 ){
        printf("winner is player 1");
        break; 
      }
      else if (x == 0 )
        {
        printf("draw");
        }
      else if (ret == 2) {
       printf("winner is player 2");
    }
    }
    system("cls");   
  }
  
  return 0;
}


void move(int arr[3][3], int rol) {
  printf("\nchoose one of the available case write the row and col \n");
  int row, col;

  scanf("%d  %d", &row, &col);

  while(arr[row][col] != 0)
  {
    printf("\ncase already taken by player\n");
    scanf("%d  %d", &row, &col);
  }

    if (rol == 1)
    {
      arr[row][col] = 1;
      front[row][col] = 'X';
    }
    else
    {
      arr[row][col] = 2;
      front[row][col] = 'O';
    }
  
}

int calculate(int arr[3][3]) {
  if ((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2]))
    return arr[0][1];
  else if ((arr[1][0] == arr[1][1]) && (arr[1][1] == arr[1][2])) {
    return arr[1][0];
  } else if ((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2])) {
    return arr[2][0];
  } else if ((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0])) {
    return arr[0][0];
  } else if ((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1])) {
    return arr[2][0];
  } else if ((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2])) {
    return arr[2][0];

  } else if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2])) {
    return arr[0][0];
  } else if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0])) {
    return arr[0][2];
  }
}
