// Pattern code in C
#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop to print all rows 
    for (int i = 0; i < rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 0; j < (rows - i) ; j++)
        { 
            printf(" "); 
        } 
  
        // inner loop 2 to print star * character 
        for (int k = 0; k <=  i ; k++) 
        { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    for (int i = rows; i >= 0; i--)
    { 
  
        // inner loop 1 to print white spaces 
        for (int j =(rows-i); j >0 ; j--) 
        { 
            printf(" "); 
        } 
  
        // inner loop 2 to print star * character 
        for (int k = i; k >=0 ; k--) 
        { 
            printf("* "); 
        } 
            printf("\n");
    }
    return 0; 
}