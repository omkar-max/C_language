#include <stdio.h>
// #define MSSG "Hello World\n"
// int main(){
//     printf(MSSG);
//     return 0;
// }

/* Hello World*/

// int main(){
//     printf("Indian\b  \n");
//     printf("New\rDelhi\n");
//     return 0;
// }

/*Output : India  
Delhi */


// int main(){
//     int a = 11;
//     printf("a = %d\t",a);
//     printf("a = %o\t",a);
//     printf("a = %x\t",a);
//     printf("a = %X\t",a);
    
       
//     return 0;
// }

/*output : a = 11	a = 13	a = b	a = B */

// #include <limits.h>
// int main(void){
//     int a = 4000000000;
//     unsigned int b = 4000000000;

//     printf("a = %d, b = %u\n",a,b);
//     printf("a = %d, b = %u\n", INT_MAX,UINT_MAX);;
//     return 0;
// }

/*output: a = -294967296, b = 4000000000
a = 2147483647, b = 4294967295
*/
// int main(void){
//     char ch;
//     printf("Enter a character");
//     scanf("%c",&ch);
//     printf("%d\n",ch);

// }
/*output: Enter a charactera
97
*/

// int main(){
//     float b = 123.1265;
//     printf("%f\t",b);
//     printf("%.2f\t",b);
//     printf("%.3f\n",b);
//     return 0;
// }
/*output: 123.126503	123.13	123.127
*/

// int main(){
//     int a = 625, b = 2394, c = 12345;
//     printf("%5d,%5d,%5d\n", a,b,c);
//     printf("%3d,%4d,%5d", a,b,c);
//     return 0;
// }
/* output:  625, 2394,12345
625,2394,12345*/

int main(){
    printf("%10s\n","India");
    printf("%4s\n","India");
    printf("%.2s\n","India");
    printf("%5.2s\n","India");
    
    return 0;
}