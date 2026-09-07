#include <stdio.h>

int soma_binario(int a, int b);

int main(){

    int a, b = 0;
    int sum = 0;

    printf("Insira o primeiro operando: ");
    scanf("%d", &a);

    printf("Insira o segundo operando: ");
    scanf("%d", &b);

    sum = soma_binario(a, b);
    printf("A soma dos dois números binários é: %d", sum);

}

int soma_binario(int a, int b){

    int digit_a, digit_b;
    int sum = 0;
    int carry_in = 0;
    int position = 1;
    int carry_out = 0;
    int sum_digit = 0;
    
    while(a > 0 || b  > 0 || carry_in > 0) {

        digit_a = a % 10;
        a/= 10;

        digit_b = b % 10;
        b /= 10;

        sum_digit= digit_a ^ digit_b ^ carry_in;
        carry_out = (digit_a & digit_b) | (carry_in & (digit_a ^ digit_b));

        sum+= sum_digit * position;

        carry_in = carry_out;
        position *= 10; 
    }
    return sum;
}