#include<stdio.h>

int func(int a,int b,int c){
    return a + b + c;
}

int main(){
    int s;
    s = func(1, 2);
    printf("%d\n", s);
    s = func(1,2,3,4);
    printf("%d", s);
    return 0;
}
/*output:program_3.c: In function ‘main’:
program_3.c:9:9: error: too few arguments to function ‘func’
    9 |     s = func(1, 2);
      |         ^~~~
program_3.c:3:5: note: declared here
    3 | int func(int a,int b,int c){
      |     ^~~~
program_3.c:11:9: error: too many arguments to function ‘func’
   11 |     s = func(1,2,3,4);
      |         ^~~~
program_3.c:3:5: note: declared here
    3 | int func(int a,int b,int c){*/