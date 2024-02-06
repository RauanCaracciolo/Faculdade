#include <stdio.h>
void table(int n);
int main(){
    int n;
    scanf("%d", &n);
    table(n);
    return 0;
}
void table(int n){
    int i=1;
    while (i <=10){
        printf("%d x %d = %d\n", i, n, n*i);
        i++;

    }


}
