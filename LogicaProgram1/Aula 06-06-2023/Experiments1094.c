#include <stdio.h>
void classificaTipos(int n);
double retornaPorcentagem(int total, int parte);
int main(){
    int n;
    scanf("%d", &n);
    classificaTipos(n);
    return 0;
}
void classificaTipos(n){
    int c=0, s=0, r=0, quantidade, total;
    char caracter;
    for(int i =0; i<n; i++){
        scanf("%d %c", &quantidade, &caracter);
        if ('C' == caracter){
            c += quantidade;
        }else if('S' == caracter){
            s += quantidade;
        }else if ('R' == caracter){
            r += quantidade;
        }

    }
    total = c + s + r;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Porcentual de coelhos: %.2lf %%\n", retornaPorcentagem(total, c));
    printf("Porcentual de ratos: %.2lf %%\n", retornaPorcentagem(total, r));
    printf("Porcentual de sapos: %.2lf %%\n", retornaPorcentagem(total, s));
}

double retornaPorcentagem(int total, int parte){
    return (parte/(total*1.0))*100.00;

}
