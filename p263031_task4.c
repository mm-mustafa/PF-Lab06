#include<stdio.h>
int main()
{
 int i, sum, n;
 
for(i=2;i<10000;i++)
 {
  sum=0;
   for(n=1;n<i;n++)
    {
      if(i%n == 0)
       {           
	sum += n;
       }
    }

  if(sum == i)
   {
    printf("%d is a Perfect number\n", i);
 
      for(n=1;n<i;n++)
       {
	 if(i%n == 0)
	  {
	   if(n !=1)
	    {
	     printf("+");
	    }
	  printf("%d", n);
	  }
       }
     printf("=%d\n", i);      
   }
 }

return 0;
}