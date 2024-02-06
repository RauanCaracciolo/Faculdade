#include <stdio.h>
void calculaOsQueDaoResto(int n);
int main(){
    int n;
    scanf("%d", &n);
    calculaOsQueDaoResto(n);
    return 0;
}
void calculaOsQueDaoResto(n){
    int i=0;
    while(i < 10000){
        if (i %n ==2){
            printf("%d\n", i);
        }
        i++;
    }


}
