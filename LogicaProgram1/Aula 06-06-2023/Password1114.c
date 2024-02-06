#include <stdio.h>
void checaSenha();
int main(){
    checaSenha();
    return 0;
}
void checaSenha(){
    for (int i = 0; i>=0; i++){
        int senha;
        scanf("%d", &senha);
        if (senha != 2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            break;
        }
    }

}
