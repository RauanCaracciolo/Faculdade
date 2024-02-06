#include <stdio.h>
void fatorial();
int main(){
    fatorial();
    return 0;
}
void fatorial(){
    int numero, fatorial = 1, j = 0;
    printf("Digite um numero inteiro:\n");
        while(j !=1){
            scanf("%d", &numero);
            if (numero >=0){
                j = 1;
            }else{
                printf("Numero invalido, tente colocar um positivo\n");
            }
        }
        for(int i = 0; i < numero; i++){
            fatorial += fatorial*i;
        }
        printf("Fatorial de %d ou (!%d) = %d", numero, numero, fatorial);


}
