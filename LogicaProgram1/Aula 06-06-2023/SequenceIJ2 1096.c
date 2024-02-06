#include <stdio.h>
void sequencia();
int main(){
    sequencia();
    return 0;
}
void sequencia(){
    int num1 = 1, num2 = 7;
    while (num1 != 11){
        printf("I=%d J=%d\n", num1, num2);
        if (num2 == 5){
            num1 +=2;
            num2 +=2;
        }else{
            num2--;
        }
    }

}
