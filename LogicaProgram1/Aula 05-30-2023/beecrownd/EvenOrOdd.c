#include <stdio.h>
void classifica(int n);
int main(){
    int n;
    scanf("%d", &n);
    classifica(n);
    return 0;
}
void classifica(int n){
    int i=0, num;
    while (i < n){
        scanf("%d", &num);
        if (num %2 ==0){
            if (num > 0){
                printf("EVEN POSITIVE\n");
            }else if(num < 0){
                printf("EVEN NEGATIVE\n");
            }else{
                printf("NULL\n");
            }
        }else{
            if (num > 0){
                printf("ODD POSITIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
        i++;
    }


}
