#include<stdio.h>

void display_bits(unsigned int x){
    int bit;
    for(int i = 31; i >= 0; i--){
        bit  = (x >> i) & 1;

        printf("%d", bit);
        if((i % 8 == 0) && (i != 0)){
            printf(" ");
        }
    }
    printf("\n");
}
int main(){
    unsigned int x,mask, bit, bit_pos;

    printf("Enter the number\n");
    scanf("%u", &x);

    printf("Enter the bit position\n");
    scanf("%u", &bit_pos);
    mask = 1 << bit_pos;
    display_bits(x);

    if( (x & mask) == 0){
        bit  = 0;
    }
    else{
        bit  = 1; 
    }
    printf("The bit %u and bit position %u", bit, bit_pos);

    return 0;
}