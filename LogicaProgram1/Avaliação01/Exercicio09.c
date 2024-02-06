#include <stdio.h>
double calculaSalarioFinal(double inicial, double conta1, double conta2);
int main (){
    double salario, conta1, conta2, salarioFinal;
    printf("Digite seu salario bruto esse mes:\n");
    scanf("%lf", &salario);
    printf("Digite o valor da primeira conta atrasada:\n");
    scanf("%lf", &conta1);
    printf("Digite o valor da segunda conta atrasada:\n");
    scanf("%lf", &conta2);
    salarioFinal = calculaSalarioFinal(salario, conta1, conta2);
    printf("Seu salario depois de pagar as contas sera R$ %.2lf\n", salarioFinal);


}

double calculaSalarioFinal(double inicial, double conta1, double conta2){
    double conta1Juros, conta2Juros;
    conta1Juros = conta1 * 1.02;
    conta2Juros = conta2 * 1.02;

    return inicial - conta1Juros - conta2Juros;
}
