#include <stdio.h>
void validaNota();
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
}
