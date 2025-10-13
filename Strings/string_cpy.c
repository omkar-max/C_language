#include<stdio.h>
#include<string.h>
char *string_cpy(char *str1, char *str2){
    char *res = str2;
    while (*str1 != '\0'){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
    return res;
}
int main(){
     char str1[30],str2[30];
     printf("Enter the string\n");
    //  scanf("%s", str);

    //  printf("%s", str);
    
    scanf("%[^\n]s", str1);
    
    printf("%s", string_cpy(str1,str2));
    return 0;
}