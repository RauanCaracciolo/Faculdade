#include <stdio.h>
void interfaceCardapio();
void calculaFinancas();
int main(){
    calculaFinancas();
    return 0;
}
void calculaFinancas(){
    int item, quantidade, i=0;
    double valor = 0.0;
    printf("Boas vindas, digite abaixo o item desejado:\n");
    while (i!=1){
        interfaceCardapio();
        scanf("%d", &item);
        printf("Digite a quantidade de item desejados:\n");
        scanf("%d", &quantidade);
            while (item < 1 || item > 11){
                printf("Opcao invalida, tente novamente\n");
                scanf("%d", &item);
            }
        switch(item){
            case 1:{
                valor+= 6.50*quantidade;
                break;
            }case 2:{
                valor+= 6.50*quantidade;
                break;
            }case 3:{
                valor+= 8.80*quantidade;
                break;
            }case 4:{
                valor+= 8.80*quantidade;
            }case 5:{
                valor+= 9.60*quantidade;
                break;
            }case 6:{
                valor+= 6.50*quantidade;
                break;
            }case 7:{
                valor+= 3.00*quantidade;
                break;
            }case 8:{
                valor+= 3.50*quantidade;
                break;
            }case 9:{
                valor+= 5.00*quantidade;
                break;
            }case 10:{
                valor+= 7.50*quantidade;
                break;
            }case 11:{
                valor+= 7.50*quantidade;
                break;
            }
        }
            int continuar;
            printf("1 - Colocar outra compra\n2 - Ir para o pagamento\n");
            scanf("%d", &continuar);
            while(continuar != 1 && continuar!=2){
                printf("Opcao invalida, tente novamente\n");
                scanf("%d", &continuar);
            }
            if(continuar == 2){
                i = 1;
                int pagamento;
                printf("Escolha a forma de pagamento:\n");
                printf("1 - Em dinheiro\n");
                printf("2 - Debito\n");
                printf("3 - Credito\n");
                printf("4 - Credito em 2x\n");
                scanf("%d", &pagamento);
                switch (pagamento){
                    case 1:{
                        valor = valor;
                        printf("Valor total: R$%.2lf\n", valor);
                        double quantoDinheiro;
                        printf("Digite o valor pago em dinheiro:\n");
                        scanf("%lf", &quantoDinheiro);
                        while(quantoDinheiro<valor){
                            printf("Valor nao e suficiente, insira um novo valor:\n");
                            scanf("%lf", &quantoDinheiro);
                        }
                        if (quantoDinheiro> valor){
                            printf("O valor que deve ser dado de troco é de: R$%.2lf\n", quantoDinheiro-valor);
                        }else{
                            printf("O dinheiro paga exatamente a conta\n");
                        }
                        break;
                    }case 2:{
                        valor+= valor*0.03;
                        printf("O valor final sera de: R$%.2lf\n", valor);
                        break;
                    }case 3:{
                        valor+= valor*0.05;
                        printf("O valor final sera de: R$%.2lf\n", valor);
                        break;
                    }case 4:{
                        valor+= valor*0.1;
                        printf("O valor final sera de: R$%.2lf\n", valor);
                        break;
                    }
                }
            }
        }
    }

void interfaceCardapio(){
    printf("Selecione a opção abaixo, de acordo com o produto consumido:\n");
    printf("Salgados:\n");
    printf("1 - Coxinha(frango)\n");
    printf("2 - Enrolado(presunto e queijo)\n");
    printf("3 - Bola1(frango e catupiry)\n");
    printf("4 - Bola2(brocolis e catupiry)\n");
    printf("5 - Bola3(camarao)\n");
    printf("6 - Bola4(queijo e catupiry)\n");
    printf("Bebidas:\n");
    printf("7 - Agua\n");
    printf("8 - Agua com gas\n");
    printf("9 - Refrigerante\n");
    printf("10 - Suco(lata)\n");
    printf("11 - Cerveja\n");
}
