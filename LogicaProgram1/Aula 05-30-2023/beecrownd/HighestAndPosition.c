#include <stdio.h>
void calculaMaiorEPosicao();
int main(){
    calculaMaiorEPosicao();
    return 0;
}
void calculaMaiorEPosicao(){
    int i =0, num, maior = 0, inputNum;
    while (i < 100){
        scanf("%d", &num);
        if (num > maior){
            inputNum = i + 1;
            maior = num;
        }
        i++;
    }
    printf("%d\n", maior);
    printf("%d\n", inputNum);

}
