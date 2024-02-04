#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
    char line[150];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        // Convert character to lowercase
        line[i] = tolower(line[i]);

        // Check if the character is a vowel
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            ++vowels;
        }
        // If it is not a vowel and an alphabet, it is a consonant
        else if ((line[i] >= 'a' && line[i] <= 'z')) {
            ++consonants;
        }
        // Check if the character is a digit
        else if (line[i] >= '0' && line[i] <= '9') {
            ++digits;
        }
        // Check if the character is an empty space
        else if (line[i] == ' ') {
            ++spaces;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}
