#include<stdio.h>
#include<string.h>

void replace_Words(char str[]){
    // int i = 0;
    // char temp[] = "Benguluru";
    // while(str[i] != '\0'){
    //     int j = 0;
    //     while (str[i] == temp[j])
    //     {
    //         /* code */
    //         str[i++] = temp[j++];
            
    //     }
    //     i++;
    // }
    // printf("%s\n", str);

    for(char *p = str; p = strstr(str,"Banguluru");p = p +strlen("Banguluru")){
        memcpy(p,"Benguluru",strlen("Banguluru"));
    }
    puts(str);
}

int main(){
    char str[] = "The buetiful city Banguluru is Banguluru";
    replace_Words(str);
}