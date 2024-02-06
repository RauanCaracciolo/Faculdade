#include <stdio.h>

double calculaEngordar(double a);
double calculaEmagrecer(double a);

int main(){
    double peso, pesoGordo, pesoMagro;
    printf("Digite o seu peso em KG:\n");
    scanf("%lf", &peso);
    pesoGordo = calculaEngordar(peso);
    printf("Caso engorde 15porcento de seu peso atual tera: %.2lf KG\n", pesoGordo);
    pesoMagro = calculaEmagrecer(peso);
    printf("Caso emagreca 20porcento de seu peso atual tera %.2lf KG\n", pesoMagro);
}

double calculaEngordar(double a){
    return a * 1.15;
}
double calculaEmagrecer(double a){
    return a * 0.8;
}