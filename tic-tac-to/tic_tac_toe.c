#include "tic_tac_toe.h"

void move(int *arr[], int rol) {
  printf("choose one of the available case \n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d", arr[i][j]);
    }
    printf("\n");
  }
  int row, col;
  scanf("%d%d", &row, &col);

  if (arr[row][col] != 0)
    printf("case already taken by player  ");
  else {
    if (rol == 1)
      arr[row][col] = 1;
    else
      arr[row][col] = 2;
  }
}

int calculate(int *arr[]) {
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
