#include <stdio.h>
void calculaImparNoIntervalo(int n);
int calculaSomaImparNoIntervalo(int x, int y);
int main(){
    int n;
    scanf("%d", &n);
    calculaImparNoIntervalo(n);
    return 0;
}
void calculaImparNoIntervalo(int n){
    for(int i =1; i<=n; i++){
        int x, y, soma;
        scanf("%d %d", &x, &y);
        soma = calculaSomaImparNoIntervalo(x, y);
        printf("%d\n", soma);

    }
}
int calculaSomaImparNoIntervalo(int x, int y){
    int soma = 0;
    if (x > y){
        int i = y;
        while (i < x){
            if (i > y){
                if (i %2 != 0){
                    soma +=i;
                }
            }
            i++;
        }
    }else{
        int i = x;
         while (i < y){
            if (i > x){
                if (i %2 != 0){
                    soma +=i;
                }
            }
            i++;
    }

    }
    return soma;
}
