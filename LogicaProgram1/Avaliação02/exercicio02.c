#include <stdio.h>
#include <math.h>
void imprimePerfeitos();
int checaPerfeito();
int main(){
    printf("Os quatro primeiros numeros perfeitos sao:\n");
    imprimePerfeitos();
    return 0;
}
void imprimePerfeitos(){
    for (int i = 1; i<=10000; i++){
        if (checaPerfeito(i) == 1){
            printf("%d\n", i);
        }
        }
    }

int checaPerfeito(int n){
    int soma = 0;
    for (int i = 1; i < n; i++){
        if(n%i == 0){
            soma+=i;
        }
    }
    if (soma==n){
        return 1;
    }else{
        return 0;
    }
}
