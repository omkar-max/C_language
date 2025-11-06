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
        printf("This is the vowel\n");
        break;
    
    default:
        printf("This is consonant\n");
        break;
    }
    return 0;
}