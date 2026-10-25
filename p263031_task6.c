
#include <stdio.h>
int main()
{
int r, i, j, num;

printf("Enter the number of rows: ");
scanf("%d", &r);

for(i=0;i<=(2*r);i++)
 {
    num=i;
    if(i>r)
     {
       num=(2*r)-i;
     }
  for(j=0;j< r-num;j++)
   {
      printf(" ");
   }
  for(j=0;j<=num;j++)
   {
      printf("%d ",num);
   }
  printf("\n");
 }

return 0;
}
