#include <stdio.h>
int verificaPrimo(int num);
int main(){
    int num;
    printf("Digite um numero para verificar se ele e primo: \n");
    scanf("%d", &num);
    if(verificaPrimo(num) == 0){
        printf("O numero e primo\n");
    }else{
        printf("O numero nao e primo");
    }
    return 0;
}
int verificaPrimo(int num){
    int retorno= 0;
    for (int i = 2; i <=num/2; i++){
        if (num%i==0){
            retorno++;
            break;
        }
    }
    return retorno;
}
