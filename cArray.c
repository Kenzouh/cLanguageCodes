#include <stdio.h>

int main() {
  int rows, num = 1;

  // Get number of rows from user
  printf("Enter number of rows: ");
  scanf("%d", &rows);

  // Outer loop for rows
  for (int i = 1; i <= rows; i++) {
    // Inner loop for printing numbers in each row
    for (int j = 1; j <= i; j++) { ;
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }

  return 0;
}