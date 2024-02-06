#include <stdio.h>
void achaQuadrante();
int main(){
    achaQuadrante();
    return 0;
}
void achaQuadrante(){
    for(int i =0; i>=0; i++){
        int x, y;
        scanf("%d %d", &x, &y);

        if(x> 0 && y > 0){
            printf("primeiro\n");
        }else if(x < 0 && y > 0){
            printf("segundo\n");
        }else if(x< 0 && y <0){
            printf("terceiro\n");
        }else if(x > 0 && y <0){
            printf("quarto\n");
        }else{
            break;
        }
    }


}
