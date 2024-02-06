#include <stdio.h>
void classifica();
int main(){
    classifica();
    return 0;
}
void classifica(){
    for(int i=0; i>=0; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b){
            printf("Decrescente\n");
        }else if(b > a){
            printf("Crescente\n");
        }else{
            break;
        }
    }

}
