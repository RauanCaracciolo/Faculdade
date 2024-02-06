#include <stdio.h>
void achaMultiplosDe13();
int main(){
    achaMultiplosDe13();
    return 0;
}
void achaMultiplosDe13(){
    int x, y, ind,j;
    int soma=0;
    scanf("%d %d", &x, &y);
    if (x> y){
        ind = y;
        j = x;
    }else{
        ind = x;
        j =y;
    }
    for(int i = ind; i<=j; i++){
        if (i%13 ==0){
        }else{
            soma = soma+i;
        }
    }
    printf("%d", soma);

}
