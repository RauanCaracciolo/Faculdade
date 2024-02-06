#include <stdio.h>
void contaPositivosEMedia();
int main(){
    contaPositivosEMedia();
    return 0;
}
void contaPositivosEMedia(){
    int positivos = 0, contador = 1;
    float media =0, num;
    while (contador <= 6){
        scanf("%f", &num);
        if (num > 0){
            positivos++;
            media = media + num;
        }
        contador++;
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1f", media/positivos);
}
