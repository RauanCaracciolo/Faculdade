#include <stdio.h>
void divide(int n);
int main(){
    int n;
    scanf("%d", &n);
    divide(n);
    return 0;
}
void divide(int n){
    for(int i =0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a != 0 && b != 0){
            float div = (float)a/(float)b;
            printf("%f\n", div);
        }else if(a == 0){
            printf("0.0\n");
        }else{
            printf("divisao impossivel\n");
        }

    }
}
