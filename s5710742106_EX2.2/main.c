#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x;
    printf("Enter Number\n");
    scanf("%d",&x);
    if(x%2==0&&x%3!=0)
  {
      printf("%d divisible by 2",x);

  }

    if(x%3==0&&x%2!=0)

  {
     printf("%d divisible by 3",x);
  }

    if(x%2==0&&x%3==0)

 {
      printf("%d divisible by 2and3",x);

 }

    return 0;
}
