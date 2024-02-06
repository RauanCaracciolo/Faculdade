#include <stdio.h>
int calculaSomaImparNoIntervalo(int x, int y);
int main(){
    int x, y, soma;
    scanf("%d %d", &x, &y);
    soma = calculaSomaImparNoIntervalo(x, y);
    printf("%d\n", soma);
    return 0;
}
int calculaSomaImparNoIntervalo(int x, int y){
    int i = y, soma = 0;
    while (i < x){
            if (i > y){
                if (i %2 != 0){
                    soma +=i;
                }
            }
            i++;
    }
    return soma;
}
