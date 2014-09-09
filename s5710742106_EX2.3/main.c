#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x;


    printf("Enter Number\n");
    scanf("%d",&x);

    if(x>40&&x<=100)
    {
        printf("true");

    }

    if(x<=40||x>100)
    {
        printf("error");

    }





    return 0;
}
