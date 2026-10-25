#include<stdio.h>
int main()
{
 int n, i, k;
 float x,sum=0, factorial, power, l;

printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of x: ");
scanf("%f", &x);

for(k=0;k<=n;k++)
{
  factorial =1;
  power = 1;
 
   for(i=1;i<=k;i++)
    {
      factorial *= i;
      power *= x;

    }
   l = power/factorial;
   sum += l;
}

printf("Sum = %.2f", sum);


return 0;
}
