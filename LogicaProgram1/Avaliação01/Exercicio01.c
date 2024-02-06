#include <stdio.h>
void calculaRacaoSobra(double a, double b, int c);
int main(){

    double kgRacao,racaoGato, racaoGato1, racaoGato2;
    printf("Digite a quantidade de ração no saco em KG:\n");
    scanf("%lf", &kgRacao);
    printf("Digite quanta racao o primeiro gato come em gramas:\n");
    scanf("%lf", &racaoGato1);
    printf("Digite quanta racao o segundo gato come em gramas:\n");
    scanf("%lf", &racaoGato2);
    racaoGato = racaoGato1 + racaoGato2;
    calculaRacaoSobra(kgRacao, racaoGato);
}

void calculaRacaoSobra(double a, double b){
    double restoRacao = a*1000 - (b * 5);
    printf("Sobrou no saco Gramas: %.2lf\n", restoRacao);
    printf("Sobrou no saco em KG: %.2lf\n", restoRacao/1000);
}