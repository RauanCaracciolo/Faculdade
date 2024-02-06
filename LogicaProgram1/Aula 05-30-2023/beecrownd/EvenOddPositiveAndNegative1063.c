#include <stdio.h>
void contaTudo();
int main(){
    contaTudo();
    return 0;

}

void contaTudo(){
    int num, contador = 0, pares = 0, impares =0, positivos =0, negativos =0;
    while (contador <=4){
        scanf("%d", &num);
        if (num %2 == 0){
            pares++;
        }else{
            impares++;
        }
        if (num > 0){
            positivos++;
        }else if (num <0){
            negativos++;
        }
        contador++;
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}
