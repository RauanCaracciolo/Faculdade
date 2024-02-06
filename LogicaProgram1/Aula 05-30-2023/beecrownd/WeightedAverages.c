#include <stdio.h>
void calculaMedias(int n);
int main(){
    int n;
    scanf("%d", &n);
    calculaMedias(n);
    return 0;
}
void calculaMedias(int n){
    int i =0, j = 0;
    float num, media =0, n1, n2, n3;;
    while (i < n){
        scanf("%f%f%f", &n1, &n2, &n3);
        media = (n1*2) + (n2*3) + (n3*5);
        printf("%.1f\n", media/10);
        i++;
    }
}
