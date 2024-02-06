#include <stdio.h>
void interfacePagamento();
double calculaPrecoComMudanca(double preco, int opcao);
int main(){
    double preco, precoFinal;
    int opcao;
    printf("Digite o preco do produto:\n");
    scanf("%lf", &preco);
    interfacePagamento();
    scanf("%d", &opcao);
    precoFinal = calculaPrecoComMudanca(preco, opcao);
    printf("Preco final: R$ %.2lf", precoFinal);
    return 0;
}
void interfacePagamento(){
    printf("Escolha seu metodo de pagamento desejado: \n 1 - A vista no dinhero ou cheque \n 2 - A vista no cartao de credito \n 3 - Em duas vezes no cartao de credito \n 4 - Em tres vezes no cartao de credito\n");
}
double calculaPrecoComMudanca(double preco, int opcao){
    double precoComMudanca;
    switch(opcao){
        case 1:{
            precoComMudanca = preco * 0.9;
            break;
        }
        case 2:{
            precoComMudanca = preco * 0.95;
            break;
        }
        case 3:{
            precoComMudanca = preco;
            break;
        }
        case 4:{
            precoComMudanca = preco * 1.10;
            break;
        }
        default:{
            precoComMudanca=0;
            printf("Opcao invalida, reinicie o programa.");
            break;
        }
    }
    return precoComMudanca;
}
