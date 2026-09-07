#include <stdio.h>

void sort_array(int array[], int size, int element);

int main(void){
    
    int array[15] = {0};
    int element = 0;

    for (int num_elems = 1; num_elems <= 15; num_elems++){

        printf("Introduza o elemento %d: ", num_elems);
        scanf("%d", &element);

        sort_array(array, num_elems - 1, element);

        printf("Vetor: {");

        for (int i = 0; i < num_elems; i++){

            printf("%d", array[i]);

            if (i < num_elems - 1)
                printf(" ");
        }
        printf("}\n");
    }
    return 0;
}

void sort_array(int array[], int size, int element){

    int position = size;

    while (position > 0 && array[position - 1] > element){

        array[position] = array[position - 1];
        position--;
    }
    array[position] = element;
}