#include<stdio.h>
#include<math.h>
int main()
{
     int n, digitCount, number, sum, rem, i=2, count=1;
	 printf("Enter how many Armstrong numbers? \n");
	 scanf("%d", &n);
	 while(count <= n)
	 {
          number = i;
		  digitCount = 0;
		  while(number != 0)
		  {
			   digitCount++;
			   number = number/10;
		  }
          number = i;
		  sum = 0;
		  while(number != 0)
		  {
			   rem = number%10;
			   sum = sum + pow(rem, digitCount);
			   number = number/10;
		  }
		  if(sum == i)
		  {
			   printf("%d\t", i);
			   count++;
		  }
		  i++;
	 }
	 return(0);
}
