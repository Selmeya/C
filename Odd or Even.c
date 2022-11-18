#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Enter a integer: ");
    scanf("%d",&s);
    if(s%2 == 0){
        printf("%d is even.",s);
    }
    else{
        printf("%d is odd.",s);
    }

    return 0;
}
