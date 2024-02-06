#include <stdio.h>
void imprimeImpares(int contador);
int main(){
    int i;
    scanf("%d", &i);
    imprimeImpares(i);
    return 0;
}
void imprimeImpares(int contador){
    int i = 1;
    while (contador >= i){
        printf("%d\n", i);
        i += 2;
    }
}
