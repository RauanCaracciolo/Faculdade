#include <stdio.h>
void realizaPesquisa();
int main(){
    realizaPesquisa();
    return 0;
}
void realizaPesquisa(){
    int maiorAcidentes=0, cidadeMaiorAcidentes, menorAcidentes=100000, cidadeMenorAcidentes, media, mediaMenorQue5000, cidadesMenos5000 = 0, codigoCidade, numeroVeiculos, numeroAciVitima, numeroAciSVitima;
    for(int i = 0; i < 5; i++){
        printf("Digite o codigo da cidade:\n");
        scanf("%d", &codigoCidade);
        printf("Digite o numero de veiculos nessa cidade:\n");
        scanf("%d", &numeroVeiculos);
        printf("Digite o numero de acidentes com vitima:\n");
        scanf("%d", &numeroAciVitima);
        printf("Digite o numero de acidentes sem vitima:\n");
        scanf("%d", &numeroAciSVitima);
        media += numeroVeiculos;
        if (numeroAciVitima > maiorAcidentes){
            maiorAcidentes = numeroAciVitima;
            cidadeMaiorAcidentes = codigoCidade;
        }
        if(numeroAciVitima < menorAcidentes){
            menorAcidentes = numeroAciVitima;
            cidadeMenorAcidentes = codigoCidade;
        }
        if (numeroVeiculos < 5000){
            mediaMenorQue5000+=numeroVeiculos;
            cidadesMenos5000++;
        }
    }
    printf("Cidade com maior numero de acidentes com vitimas: %d, totalizando %d acidentes\n", cidadeMaiorAcidentes, maiorAcidentes);
    printf("Cidade com menor numero de acidentes com vitimas: %d, totalizando %d acidentes\n", cidadeMenorAcidentes, menorAcidentes);
    printf("Media de carros em todas as cidades: %d\n", media/5);
    printf("Media das cidades com menos de 5000 veiculos: %d\n", mediaMenorQue5000/cidadesMenos5000);

}
