#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void escolhaParImpar();
void escolheOutro(int a);
void escolhaNumero();
void checaGanhador(int num1, int num2, int parImpar);
int geradorAleatorio(int min, int max);

int main(){
    int parImpar, numero, numeroGerado;
    srand((unsigned)time(NULL));
    escolhaParImpar();
    scanf("%d", &parImpar);
    escolheOutro(parImpar);
    escolhaNumero();
    scanf("%d", &numero);
    if (numero >=0 && numero <= 5){
        numeroGerado = geradorAleatorio(0, 5);
        printf("Eu escolho %d!\n", numeroGerado);
        checaGanhador(numero, numeroGerado, parImpar);
    }else{
        printf("Entrada invalida.\n");
        return 0;
    }
    return 0;
}
void escolhaParImpar(){
    printf("Escolha entre as opcoes abaixo: \n 1 - Par \n 2 - Impar\n");
}
void escolheOutro(int a){
    if (a == 1){
        printf("Entao eu vou ir de Impar!\n");
    }else{
        printf("Entao eu vou ir de Par!\n");
    }
}
void escolhaNumero(){
    printf("Escolha um numero entre 0, 1, 2, 3, 4 e 5\n");
}
int geradorAleatorio(int min, int max){
    return min + rand() % max;
}
void checaGanhador(int num1, int num2, int parImpar){
    int soma = num1+num2;
    if (soma %2 ==0){
        printf("O numero e par!\n");
        switch (parImpar){
            case 1:{
                printf("Voce ganhou...\n");
                break;
            }
            case 2:{
                printf("Voce perdeu!\n");
                break;
            }
            default:{
                printf("Como voce chegou nessa opcao?");
                break;
            }
        }
    }else{
        switch (parImpar){
            case 1:{
                printf("Voce perdeu!\n");
                break;
            }
            case 2:{
                printf("Voce ganhou...\n");
                break;
            }
            default:{
                printf("Como voce chegou nessa opcao?");
                break;
            }
        }
    }
}
