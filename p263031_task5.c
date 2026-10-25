
#include <stdio.h>
int main()
{
int r, i, j;
char ch;

printf("Enter the number of rows: ");
scanf("%d", &r);

printf("Enter the symbol: ");
scanf(" %c", &ch);

for(i=1;i<=r;i++)
 {
     for(j=1;j<=r-i;j++)
      {
       printf(" ");
      }
     for(j=1;j<=(2*i)-1;j++)
      {
       printf("%c", ch);
      }
  printf("\n");
 }

return 0;
}
