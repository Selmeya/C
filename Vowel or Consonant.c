#include <stdio.h>

int main()
{
    char s;
    int l_vowel,u_vowel;
    printf("Enter an alphabet: ");
    scanf("%c",&s);
    l_vowel =(s == 'a' || s == 'e'|| s=='i'||s == 'o'||s == 'u');
    u_vowel=(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U');
    if(l_vowel || u_vowel){
        printf("%c is a vowel",s);
    }
    else{
        printf("%c is a consonant",s);
    }

    return 0;
}
