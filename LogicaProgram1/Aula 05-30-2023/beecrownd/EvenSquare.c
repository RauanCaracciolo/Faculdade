#include <stdio.h>
void imprimeQuadrado(int n);
int main(){
    int n;
    scanf("%d", &n);
    imprimeQuadrado(n);
    return 0;
}
void imprimeQuadrado(int n){
    int i =0, quadrado;
    while (i < n){
        i +=2;
        quadrado = i*i;
        printf("%d^ = %d\n", i, quadrado);
    }


}
