// // 19.	Write a program in C to test a number is prime or not using dynamic memory allocation.
// #include <stdio.h>
// #include <stdbool.h>

// bool is_prime(int num) {
//     if (num < 2) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// void generate_primes_in_range(int start, int end) {
//     printf("Prime numbers between %d and %d:\n", start, end);
//     for (int num = start; num <= end; ++num) {
//         if (is_prime(num)) {
//             printf("%d ", num);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int start_range, end_range;
//     printf("Enter the start of the range: ");
//     scanf("%d", &start_range);
//     printf("Enter the end of the range: ");
//     scanf("%d", &end_range);

//     if (start_range >= end_range) {
//         printf("Invalid range. Start value must be less than end value.\n");
//         return 1;
//     }

//     generate_primes_in_range(start_range, end_range);
//     return 0;
// }
#include <stdio.h>

int main() {
    int start_range, end_range;
    printf("Enter the start of the range: ");
    scanf("%d", &start_range);
    printf("Enter the end of the range: ");
    scanf("%d", &end_range);

    if (start_range >= end_range) {
        printf("Invalid range. Start value must be less than end value.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d:\n", start_range, end_range);
    for (int num = start_range; num <= end_range; ++num) {
        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

