#include <stdio.h>
void calcula();
int main(){
    calcula();
    return 0;
}
void calcula(){
    for(int i = 0; i>=0; i++){
        int a, b, soma= 0;
        scanf("%d %d", &a, &b);
        if(a > 0 && b > 0){
            if(a>b){
                for(int j = b; j<=a; j++){
                printf("%d ", j);
                soma +=j;}
            }else{
                for(int j = a; j<=b; j++){
                printf("%d ", j);
                soma +=j;
                }
            }
            printf("Sum= %d\n", soma);
        }else{
            break;
        }
    }
}
