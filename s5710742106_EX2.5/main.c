#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    c = b-a;
    if(c>=0)
    {
        printf("%d\n",c);
    }
    else
    {
        d = c*(-1);
        printf("%d\n",d);
    }

    return 0;
}
