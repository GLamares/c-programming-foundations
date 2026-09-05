#include <stdio.h>
#include <stdbool.h>

int main(){

    int prime_ctr = 0;
    bool isPrime = 1;
    int primes_found = 0;
    int number = 2;

    printf("Insira o número de primos que pretende:");
    scanf("%d", &prime_ctr);

    printf("Os primeiros %d números primos são:\n", prime_ctr);

    while (primes_found < prime_ctr){

        isPrime = 1;

        //estudar os divisores entre 2 e o numero antes do numero em estudo, se resto 0, n é primo, break
        for(int divisor = 2; divisor < number; divisor++){

            if(number % divisor == 0){

                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            printf("%d\n", number);
            primes_found++;
        }

        number++;
    }
}
    