#include <stdio.h>
void sequencia();
int main(){
    sequencia();
    return 0;
}
void sequencia(){
    int num1 = 1, num2 = 60;
    for (int i = 0; i<= 12; i++){
        if (num2 == 0){
            printf("I=? J=%d\n", num2);
        }else{
            printf("I=%d J=%d\n", num1, num2);
            num1 +=3;
            num2 -=5;
        }

    }

}
