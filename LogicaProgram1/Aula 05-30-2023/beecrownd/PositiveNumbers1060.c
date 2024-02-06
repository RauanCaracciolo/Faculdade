#include <stdio.h>
int contaPositivos();
int main(){
    int positivos;
    positivos = contaPositivos();
    printf("%d valores positivos\n", positivos);
    return 0;
}
int contaPositivos(){
    int positivos = 0, contador = 0;
    float numero;
    while (contador <= 5){
        scanf("%f", &numero);
        if(numero>0){
            positivos++;
        }
        contador++;
    }
    return positivos;
}
