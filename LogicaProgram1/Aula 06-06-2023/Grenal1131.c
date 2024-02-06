#include <stdio.h>
int gremioV=0, interV=0, empates=0, numero=0;
void Grenal();
int chamaGrenal();
int main(){
    Grenal();
    return 0;
}

void Grenal(){
    int indice =2000;
    for (int i = 0; i<indice; i++){
        int inter, gremio;
        scanf("%d %d", &inter, &gremio);
        if (inter > gremio){
            interV++;
        }else if(gremio > inter){
            gremioV++;
        }else{
            empates++;
        }
        numero++;
        printf("Novo grenal (1-sim 2-nao)\n");
        int n;
        scanf("%d", &n);
        if (n == 1){
            continue;
        }else if(n==2){
            printf("%d grenais\n", numero);
            printf("Inter: %d\n", interV);
            printf("Gremio: %d\n", gremioV);
            printf("Empates: %d\n", empates);
            if (interV > gremioV){
                printf("Inter venceu mais\n");
            }else if(gremioV > interV){
                printf("Gremio venceu mais\n");
            }else{
                printf("Nao houve vencedor\n");
            }
            break;
        }else{
            indice=0;
            }
    }
}

