// 20.	Write a program in C to create a file, write in it, read from it and at last close the file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char data[100];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Create a new file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating the file.\n");
        return 1;
    }

    // Write data to the file
    printf("Enter data to write to the file: ");
    scanf(" %[^\n]", data);
    fprintf(file, "%s\n", data);

    // Close the file
    fclose(file);
    printf("Data written to the file successfully.\n");

    // Reopen the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Read data from the file
    printf("Contents of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Close the file again
    fclose(file);

    return 0;
}
