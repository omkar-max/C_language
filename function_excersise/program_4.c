#include<stdio.h>
int func(int x, int y, int z){
    return 2*(x+y+z);
}
int main(){
    int x = 1, y = 2, z= 3, result;
    result = func(x,y,(z=5,z+10));
    printf("x = %d, y = %d, z = %d", x,y,z);
    printf("result = %d",result);
    return 0;
}