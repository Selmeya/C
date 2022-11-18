#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s, e, l;
    printf("Enter the first number: ");
    scanf("%lf",&s);
    printf("Enter the second number: ");
    scanf("%lf",&e);
    l=s;
    s=e;
    e=l;
    printf("\n After swapping , first number = %.2lf\n",s);
    printf("After swapping, second number = %.2lf",e);
    return 0;
}
