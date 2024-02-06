// 15.	Write a program in C to abbreviate the given string like given pattern:
// i/p – Rahul Kumar Roy
// o/p – R. K. Roy
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, item;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d", &item);

    for (i = 0; i < n; i++) {
        if (arr[i] == item) {
            pos = i;
            break;
        }
    }

    if (i == n) {
        printf("Element not found.\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Array after deletion:\n");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
