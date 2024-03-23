// 15.	Write a program in C to abbreviate the given string like given pattern:
// i/p – Rahul Kumar Roy
// o/p – R. K. Roy
#include <stdio.h>
#include<string.h>
int main ()
{
    char st1[20],st2[20],st3[20];
    printf("Enter the full name : ");
    gets(st1);
    gets(st2);
    gets(st3);
    strcat(st1," ");
    strcat(st1,st2);
    strcat(st1," ");
    strcat(st1,st3);
    printf("%s\n",st1);
    printf("%c.%c.%s",st1[0],st2[0],st3[20]);
    return 0; 
}
