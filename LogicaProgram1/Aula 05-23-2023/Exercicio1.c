#include <stdio.h>
int verifiaPlacaVencimento(int a);
void verificaSeVencido(int a, int b);
void imprimeMeses(int a);
int main(){
    int mes, placa, ultimoDigito;
    printf("Digite o mes atual:\n");
    scanf("%d", &mes);
    printf("Digite a placa do carro:\n");
    scanf("%d", &placa);
    ultimoDigito = verifiaPlacaVencimento(placa);
    verificaSeVencido(mes, ultimoDigito);
    return 0;
}
int verifiaPlacaVencimento(int a){
    return a %10;
}
void verificaSeVencido(int a, int b){
    if (a == b && (a<= 12 && a>= 0) && (b<=12 && b>=12)){
        printf("Se IPVA vence esse mes.\n");
        imprimeMeses(a);
    }else if(a>b && (a<=12 && a>=0) && (b<=12 && b>=0)){
        printf("IPVA esta vencido, venceu em:\n");
        imprimeMeses(b);
    }else if(a<b && (a<=12 && a>=0) && (b<=12 && b>=0)){
        printf("IPVA ira vencer em:\n");
        imprimeMeses(b);
    }else{
        printf("Mes invalido.\n");
    }

    }
void imprimeMeses(int a){
    switch (a){
            case 0:{
                printf("Final 0 - mes (10) - Outubro\n");
                break;
            }
            case 1:{
                printf("Final 1 - mes (1) - Janeiro\n");
                break;
            }
            case 2:{
                printf("Final 2 - mes (2) - Fevereiro\n");
                break;
            }
            case 3:{
                printf("Final 3 - mes (3) - Março\n");
                break;
            }
            case 4:{
                printf("Final 4 - mes (4) - Abril\n");
                break;
            }
            case 5:{
                printf("Final 5 - mes (5) - Maio\n");
                break;
            }
            case 6:{
                printf("Final 6 - mes (6) - Junho\n");
                break;
            }
            case 7:{
                printf("Final 7 - mes (7) - Julho\n");
                break;
            }
            case 8:{
                printf("Final 8 - mes(8) - Agosto\n");
                break;
            }
            case 9:{
                printf("Final 9 - mes(9) - Setembro\n");
                break;
            }
        }
}
