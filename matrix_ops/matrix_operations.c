#include <stdio.h>

int pos(int x, int y, int tamanho);
void imprimeMatriz(int matriz[], int N);
void produtoEscalar(int matriz[], int N, int escalar);
void multMatrizes(int matriz[], int mult[], int resultado[], int N);

int main(void){
    
    int N = 0;
    int escalar = 0;

    int matriz[100] = {0};
    int mult[10] = {0};
    int resultado[10] = {0};

    printf("Introduza o tamanho de uma matriz quadrada com N <= 10: ");
    scanf("%d", &N);

    if (N < 1 || N > 10){

        printf("Tamanho invalido.\n");
        return 1;
    }

    printf("Introduza os elementos da matriz: ");

    for (int i = 0; i < N * N; i++)
        scanf("%d", &matriz[i]);

    printf("\nMatriz:\n");
    imprimeMatriz(matriz, N);

    printf("\nIntroduza um escalar: ");
    scanf("%d", &escalar);

    produtoEscalar(matriz, N, escalar);

    printf("\nMatriz apos produto escalar:\n");
    imprimeMatriz(matriz, N);

    printf("\nIntroduza os elementos da matriz de multiplicacao: ");

    for (int j = 0; j < N; j++)
        scanf("%d", &mult[j]);

    multMatrizes(matriz, mult, resultado, N);

    printf("\nResultado da multiplicacao:\n");

    for (int i = 0; i < N; i++)
        printf("%d\n", resultado[i]);

    return 0;
}

int pos(int x, int y, int tamanho){

    return x + y * tamanho;
}

void imprimeMatriz(int matriz[], int N){

    for (int linha = 0; linha < N; linha++){

        for (int coluna = 0; coluna < N; coluna++)
            printf("%d ", matriz[pos(coluna, linha, N)]);

        printf("\n");
    }
}

void produtoEscalar(int matriz[], int N, int escalar){

    for (int linha = 0; linha < N; linha++){
        
        for (int coluna = 0; coluna < N; coluna++)
            matriz[pos(coluna, linha, N)] *= escalar;
    }
}

void multMatrizes(int matriz[], int mult[], int resultado[], int N){

    for (int linha = 0; linha < N; linha++){
        
        resultado[linha] = 0;

        for (int coluna = 0; coluna < N; coluna++){

            resultado[linha] +=
                matriz[pos(coluna, linha, N)] * mult[coluna];
        }
    }
}