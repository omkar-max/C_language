#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);


int main(){
    float (*operations[])(float,float) = {add,sub,mul,div};

    float a, b;

    printf("Enter a and b\n");
    scanf("%f %f\n", &a,&b);
    for(int i = 0; i < 4; i++){
        printf("The result is: %f\n", (*operations[i])(a,b));
    }

    return 0;
}

float add(float a, float b){
    return a + b;
}
float sub(float a, float b){
    return a - b;
}
float mul(float a, float b){
    return a * b;
}
float div(float a, float b){
    return a / b;
}