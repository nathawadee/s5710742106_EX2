#include <stdio.h>pr
#include <stdlib.h>

int main()
{


    int x ;

    printf("Enter number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("even\n");
    }
    if(x%2!=0)
    {
        printf("odd\n");
    }
    return 0;
}
