#include <stdio.h>
void interfacePrato();
void interfaceSobremesa();
void interfaceBebida();
int caloriasPrato(int prato);
int caloriasSobremesa(int sobremesa);
int caloriasBebida(int bebida);
int main(){
    int prato, sobremesa, bebida, caloriaBebida, caloriaPrato, caloriaSobremesa, caloriasTotal;
    interfacePrato();
    scanf("%d", &prato);
    interfaceSobremesa();
    scanf("%d", &sobremesa);
    interfaceBebida();
    scanf("%d", &bebida);
    caloriaPrato = caloriasPrato(prato);
    caloriaSobremesa = caloriasSobremesa(sobremesa);
    caloriaBebida = caloriasBebida(bebida);
    caloriasTotal = caloriaPrato + caloriaSobremesa + caloriaBebida;
    printf("Calorias totais: %d cal", caloriasTotal);
    return 0;
}
void interfacePrato(){
    printf("Digite a opcao do seu desejo entre os pratos: \n 1 - Vegetariano \n 2 - Peixe \n 3 - Frango \n 4 - Carne\n");
}
void interfaceSobremesa(){
    printf("Digite a opcao do seu desejo entr as sobremesas:\n 1 - Abacaxi \n 2 - Sorvete diet \n 3 - Mouse diet \n 4 - Mouse chocolate\n ");
}
void interfaceBebida(){
    printf("Digite a opcao do seu desejo entre as bebidas: \n 1 - Cha \n 2 - Suco de laranja \n 3 - Suco de melao \n 4 - Refrigerante diet\n");
}
int caloriasPrato(int prato){
    double calorias;
    switch(prato){
        case 1:{
            calorias = 180;
            break;
        }
        case 2:{
            calorias = 230;
            break;
        }
        case 3:{
            calorias = 250;
            break;
        }
        case 4:{
            calorias = 350;
            break;
        }
        default:{
            calorias = 0;
            printf("Valor invalido para prato.\n");
            break;
        }
    }
    return calorias;
}
int caloriasSobremesa(int sobremesa){
    double calorias;
    switch (sobremesa){
        case 1:{
            calorias = 75;
            break;
        }
        case 2:{
            calorias = 110;
            break;
        }
        case 3:{
            calorias = 170;
            break;
        }
        case 4:{
            calorias = 200;
            break;
        }
        default:{
            calorias = 0;
            printf("Valor invalido para sobremesa.\n");
            break;
        }
    }
    return calorias;
}
int caloriasBebida(int bebida){
    double calorias;
    switch (bebida){
        case 1:{
            calorias = 20;
            break;
        }
        case 2:{
            calorias = 70;
            break;
        }
        case 3:{
            calorias = 100;
            break;
        }
        case 4:{
            calorias = 65;
            break;
        }
        default:{
            calorias = 0;
            printf("Valor invalido para bebidas.\n");
            break;
        }
    }
    return calorias;
}
