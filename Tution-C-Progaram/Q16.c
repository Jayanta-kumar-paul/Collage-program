#include <stdio.h>
int main () {
  int size, i, j;
  printf("Enter the size of the pyramid: ");
  scanf("%d", &size);
  // print the upper half of the pyramid
  for (i = 1; i <= size; i++) {
    for (j = 1; j <= i; j++)
      printf("%d", i);
    printf("\n");
  }
  // print the lower half of the pyramid
  for (i = size - 1; i > 0; i--) {
    for (j = i; j > 0; j--)
      printf("%d", i);
    printf("\n");
  }
  return 0;
}
