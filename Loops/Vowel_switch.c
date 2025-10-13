#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        /* code */
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is the vowel");
        break;
    
    default:
        printf("This is consonant");
        break;
    }
    return 0;
}