#include <stdio.h>
void imprimeImparesApartir(int num);
int main(){
    int numero;
    scanf("%d", &numero);
    imprimeImparesApartir(numero);
    return 0;
}
void imprimeImparesApartir(int num){
    int i = 0;
    while (i <= 5){
        if (num %2 == 0){
            num++;
        }else{
            num = num;
        }
        printf("%d\n", num);
        num +=2;
        i++;
    }
}
