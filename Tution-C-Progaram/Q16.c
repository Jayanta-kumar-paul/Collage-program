#include <stdio.h>
int main () {
  int size;
  printf("Enter the size of the pyramid: ");
  scanf("%d", &size);
  // print the upper half of the pyramid
  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= i; j++)
      printf("%d", i);
    printf("\n");
  }
  // print the lower half of the pyramid
  for (int i = size - 1; i > 0; i--) {
    for (int j = i; j > 0; j--)
      printf("%d", i);
    printf("\n");
  }
  return 0;
}
