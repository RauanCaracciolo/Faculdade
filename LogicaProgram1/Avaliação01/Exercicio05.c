#include <stdio.h>
double conversorDolarEmReal(double a, double b);
int main(){
    double quantidadeDolar, cotacaoDolar, valorReal;
    printf("Digite quantos dolares tem em sua conta:\n");
    scanf("%lf", &quantidadeDolar);
    printf("Digite a cotacao atual do dolar:\n");
    scanf("%lf", &cotacaoDolar);
    valorReal = conversorDolarEmReal(quantidadeDolar, cotacaoDolar);
    printf("Voce tem R$ %.2lf", valorReal);

}
double conversorDolarEmReal(double a, double b){
    return a*b;
}
