#include<stdio.h>
int main()
{
int i, k;
char j;

printf("Enter symbol: ");
scanf("%c", &j);

for(i=1;i<=5;i++)
{
       for(k=1;k<=i;k++)
      {
	printf("%c", j);
      }
	printf("\n");
}

for(i=4;i>=1;i--)
{
       for(k=1;k<=i;k++)
      {
	printf("%c", j);
      }
	printf("\n");
}


return 0;
}