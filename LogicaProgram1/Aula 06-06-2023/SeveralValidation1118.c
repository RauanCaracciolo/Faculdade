#include <stdio.h>
void validaNota();
void querContinuar();
int main(){
    validaNota();
    return 0;
}
void validaNota(){
    float media =0;
    for(int i =0; i<2; i=i){
        float nota;
        scanf("%f", &nota);
        if(nota > 0 && nota <=10){
            i++;
            media += nota;
        }else{
            printf("nota invalida\n");
        }

    }
    printf("media = %.2f\n", media/2);
    querContinuar();
}
void querContinuar(){
    printf("novo calculo (1-sim 2-nao)\n");
    int s;
    scanf("%d", &s);
    if(s == 1){
        validaNota();
    }else if(s == 2){
        return 0;
    }else{
        querContinuar();
    }
    }
