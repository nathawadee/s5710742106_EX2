#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter midterm final: ");
    scanf("%f %f",&a,&b);
    c = a+b;
    if(a>=20&&b>=30)
    {
        printf("passed with score %.2f\n",c);
    }
    if(a<20||b<30)
    {
        if(c>=60)
        {
            printf("passed with score %.2f\n",c);
        }
        if(c<60)
        {
            printf("failed with score %.2f\n",c);
        }
    }
    if(a<20&&b<30)
    {
        printf("failed with score %.2f\n",c);
    }

    return 0;
}
