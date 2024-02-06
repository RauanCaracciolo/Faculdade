#include <stdio.h>
void interfaceTamanho();
void interfaceRegiao();
double calculaTaxaTamanho(int tamanho);
double calculaTaxaRegiao(int regiao);
double calculaSeguro(double preco, double taxa);
double calculaFranquia(double seguro);
int main(){
    int tamanho, regiao;
    double precoCarro,taxaTotal, taxaTamanho, taxaRegiao, valorSeguro, valorFranquia;
    printf("Digite o valor do carro:\n");
    scanf("%lf", &precoCarro);
    interfaceTamanho();
    scanf("%d", &tamanho);
    interfaceRegiao();
    scanf("%d", &regiao);
    taxaTamanho = calculaTaxaTamanho(tamanho);
    taxaRegiao = calculaTaxaRegiao(regiao);
    taxaTotal = taxaTamanho + taxaRegiao;
    valorSeguro = calculaSeguro(precoCarro, taxaTotal);
    printf("O valor do seguro e: R$ %.2lf", valorSeguro);
    valorFranquia = calculaFranquia(valorSeguro);
    printf("O valor da franquia e: R$ %.2lf", valorFranquia);
    return 0;
}
void interfaceTamanho(){
    printf("Digite uma das opcoes abaixo sobre o tamanho do carro:: \n 1 - Carro tipo Pequeno \n 2 - Carro tipo Medio \n 3 - Carro tipo Grande\n");
}
void interfaceRegiao(){
    printf("Digite uma das opcoes abaixo sobre a regiao do carro: \n 1 - Norte e Nordeste \n 2 - Sul e Centro-Oestre \n 3 - Sudeste(exceto Sao Paulo e Rio de Janeiro) \n 4 - Sao Paulo \n 5 - Rio de Janeiro\n");
}
double calculaTaxaTamanho(int tamanho){
    double taxa;
    switch (tamanho){
        case 1:{
            taxa = 0.015;
            break;
        }
        case 2:{
            taxa = 0.02;
            break;
        }
        case 3:{
            taxa = 0.017;
            break;
        }
        default:
            printf("Entrada incorreta");
            break;
    }
    return taxa;
}
double calculaTaxaRegiao(int regiao){
    double taxa;
    switch (regiao){
        case 1:{
            taxa = 0.003;
            break;
        }
        case 2:{
            taxa = 0.005;
            break;
        }
        case 3:{
            taxa = 0.008;
            break;
        }
        case 4:{
            taxa = 0.01;
            break;
        }
        case 5:{
            taxa = 0.015;
            break;
        }
        default:{
            taxa = 0;
            break;
        }
    }
    return taxa;
}
double calculaSeguro(double preco, double taxa){
    return preco * taxa;
}
double calculaFranquia(double seguro){
    double retornoSeguro;
    if (seguro < 1000.00){
        retornoSeguro = 800.00;
    }else if(seguro >= 1000.00 && seguro <= 1500){
        retornoSeguro = 1200.00;
    }else{
        retornoSeguro = 1600.00;
    }
    return retornoSeguro;
}
