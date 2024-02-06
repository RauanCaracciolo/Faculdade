#include <stdio.h>

double calcula100tagem(double a, double b);
int main(){
    double eleitores, branco, nulo, validos,  brancos100, nulo100, validos100;
    printf("Digite o numero de eleitores em Araraquara: ");
    scanf("%lf", &eleitores);
    printf("Digite o numero de votos em branco da ultima eleicao: ");
    scanf("%lf", &branco);
    printf("Digite o numero de votos nulos da ultima eleicao: ");
    scanf("%lf", &nulo);
    printf("Digite o numero de votos validos da ultima eleicao: ");
    scanf("%lf", &validos);
    brancos100 = calcula100tagem(eleitores, branco);
    nulo100 = calcula100tagem(eleitores, nulo);
    validos100 = calcula100tagem(eleitores, validos);
    printf("Porcentagem de votos validos: %.2lf\n", validos100);
    printf("Porcentagem de votos nulos: %.2lf\n", nulo100);
    printf("Porcentagem de votos brancos: %.2lf\n", brancos100);
    
    

}

double calcula100tagem(double a, double b){
    return (b/a) *100;

}