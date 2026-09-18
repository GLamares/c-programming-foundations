#include <stdio.h>
#include <stdbool.h>

int word_counter(char sentence[]);
void strongest_word (char sentence[], char strongest[]);
float avg_length(char sentence[]);

int main(){

    char sentence[200];
    char strongest[200];
    printf("Frase? ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Número de palavras: %d\n", word_counter(sentence));
    
    strongest_word(sentence, strongest);
    printf("Palavra maior: %s", strongest);

    printf("Comprimento médio: %f\n", avg_length(sentence));
}

int word_counter(char sentence[]){

    int counter = 1;

    for(int character = 0; sentence[character] != '\0'; character++){

        if(sentence[character] == ' '  || sentence[character] == '\0')
            counter++;
    }

        return counter;
}

void strongest_word (char sentence[], char strongest[]){

    int current_length = 0;
    int max_length = 0;
    int max_start = 0;

    for (int character = 0; ; character++){

        if (sentence[character] != ' ' && sentence[character] != '\0')
            current_length++;
        
        else{

            if (current_length > max_length){

                max_length = current_length;
                max_start = character - current_length;//guarda a posição inicial da palavra mais forte
            }

            current_length = 0;

            if (sentence[character] == '\0')
                break;
        }
    }

    for (int i = 0; i < max_length; i++)
        strongest[i] = sentence[max_start + i];
    
    strongest[max_length] = '\0';
}

float avg_length(char sentence[]){

    int length = 0;
    float avg_sum = 0;
    float word_counter = 0;

    for (int character = 0; ; character++){

        if (sentence[character] != ' ' && sentence[character] != '\0')
            length++;
        
        else{

            avg_sum+= length;
            word_counter++;
            length = 0;

            if (sentence[character] == '\0')
                break;   
        }
    }
    return avg_sum/word_counter;
}