#include <stdio.h>

int main(){

    int dig_1;
    int dig_2;
    int dig_3;
    int dig_4;
    int bin_num = 0;

    printf("Qual o valor em binário? ");

    scanf("%d %d %d %d", &dig_1, &dig_2, &dig_3, &dig_4);

    bin_num = (dig_1 << 3) + (dig_2 << 2) + (dig_3 << 1) + dig_4;

    printf ("O valor na base decimal:%d\n",bin_num);
    printf("O valor na base octal: %o\n", bin_num);
    printf("O valor na base hexadecimal: %X\n", bin_num);


}