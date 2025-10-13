#include<stdio.h>
#include<string.h>
int main(){
     char str1[30],str2[30];
     printf("Enter the string\n");
    //  scanf("%s", str);

    //  printf("%s", str);
    
    gets(str1);
    gets(str2);
    if(!strcmp(str1,str2)){
        printf("Both strings are equal");

    }
    else{
        printf("Not equal");
    }
    return 0;
}