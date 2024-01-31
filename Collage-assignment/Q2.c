// Write a program in C to print first 50 prime numbers.
#include<stdio.h>
int main()
{
	 
	 int n=50, count=1, rem, i=2;
	 while(count <= n)
	 {
		  rem = 0;
		  for(int j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
				    rem=1;
				    break;
			   }
		  }
		  if(rem==0)
		  {
			   printf("%3d",i);
			   count++;
		  }
		  i++;
	 }
	  
	 return 0;
}
//   2  3  5  7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 
//   97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 
//   191 193 197 199 211 223 227 229