#include <stdio.h>

int main(void)
{
    unsigned long long number;

    int digit;
    int weight;
    int sum = 0;
    int checksum;

    printf("Insira um EAN-13 (sem checksum): ");
    scanf("%llu", &number);

    for (int position = 0; position < 12; position++)
    {
        digit = number % 10;

        /*
         * Como estamos a ler da direita para a esquerda:
         * posição 12 -> peso 3
         * posição 11 -> peso 1
         * posição 10 -> peso 3
         * ...
         */
        if (position % 2 == 0)
            weight = 3;
            
        else
            weight = 1;

        sum += digit * weight;

        number /= 10;
    }

    checksum = (10 - (sum % 10)) % 10;

    printf("Checksum: %d\n", checksum);

    return 0;
}