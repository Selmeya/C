#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, e,l;
    printf("Enter First Number: ");
    scanf("%d",&s);
    printf("Enter the Second Number: ");
    scanf("%d",&e);
    printf("Enter the Third Number: ");
    scanf("%d",&l);
    if(s> e && s>l){
        printf("%d is the largest among the three.",s);
    }
    else if (e > s && e > l){
        printf("%d is the largest among the three.",e);
    }
    else{
        printf("%d is the largest among the three.",l);
    }
    return 0;
}
