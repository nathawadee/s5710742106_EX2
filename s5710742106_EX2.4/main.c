#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z,y;
    printf("Enter 3 Number: \n");
    scanf("%d %d %d",&x,&z,&y);


    if(x>z&&x>y)
    {
        if(z>y)
        {
          printf("%d %d %d\n",x,z,y);
        }

         if(y>z)
         {
            printf("%d %d %d\n",x,y,z);

         }


    }

    if(z>x&&z>y)
    {
        if(x>y)
        {
          printf("%d %d %d\n",z,x,y);
        }

         if(y>x)
         {
            printf("%d %d %d\n",z,y,x);

         }
    }

      if (y>x&&y>z)

      {
          if(x>z)
        {
          printf("%d %d %d\n",y,x,z);
        }

         if(z>x)
         {
            printf("%d %d %d\n",y,z,x);

      }

    }


    return 0;
}
