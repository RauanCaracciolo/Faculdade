#include <stdio.h>
int contaPares();
int main(){
    int  pares;
    pares = contaPares();
    printf("%d valores pares\n", pares);
}

int contaPares(){
    int contador = 0, pares = 0, num;
    while (contador <=4){
        scanf("%d", &num);
        if (num%2 == 0){
            pares++;
        }
        contador++;
    }
    return pares;
}
