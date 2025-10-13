#include<stdio.h>
#include<string.h>
char *string_cat(char *str1, char *str2){
    char *res = str1;
    while (*str1 != '\0'){
        
        
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    
    
    return res;
}
int main(){
     char str1[30],str2[30];
     printf("Enter the string\n");
    //  scanf("%s", str);

    //  printf("%s", str);
    
    // scanf("%[^\n]s", str1);
    // scanf("%[^\n]s", str2); This is not useful when you need to read two lines from the user.
    gets(str1);
    gets(str2);
    
    printf("%s", string_cat(str1,str2));
    return 0;
}