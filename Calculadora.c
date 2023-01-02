#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

void MainMenu();
void Soma();
void Subtracao();
void Divisao();
void Multiplicacao();
// funções utilizadas


void MainMenu(){ // inicio da função tela menu principal
int op;
system("cls");
system ("color F");

    printf("\t\t=======================");
    printf("\n\t\t   Calculadora em C");
    printf("\n\t\t=======================");

    printf("\n\n\t\t (1)- Matemática");
    printf("\n\t\t (2)- Subtração");
    printf("\n\t\t (3)- Divisão");
    printf("\n\t\t (4)- Multiplicação");
    printf("\n\t\t (5)- Encerrar");

    printf("\n\n\tEscolha uma operação matemática para prosseguir com o cálculo: ");
    scanf("%d",&op);
    getchar();

    switch(op){  // switch para escolha do usuário
        case 1:
            system("cls");
            Soma(); // chama a função soma
            break;

        case 2:
            system("cls");
            Subtracao(); // chama a função subtração
            break;

        case 3:
            system("cls");
            Divisao(); // chama a função divisão
            break;

        case 4:
            system("cls");
            Multiplicacao(); // chama a função multiplicação
            break;

        case 5:
            printf("\n\t\t\t\t Fim da execução....");
            break;

        default:
            system("cls");
            printf("\t\t Valor inválido! Retornando ao menu...\n");
            sleep(1);
            MainMenu();
            break;


    }


}
// fim da função menu
void Soma(){
int n1, n2, soma;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       MATEMÁTICA"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro número: ");
        scanf("%d",&n1);
                                             // campo para usuário inserir valores
    printf("\t Informe o segundo número: ");
        scanf("%d",&n2);

    soma=n1+n2; // cálculo
    printf("\n\tO resultado da operação entre %d + %d  é: %d",n1,n2, soma);
    getchar();

    printf("\n\tDeseja realizar outro cálculo? (1) SIM (2) NÃO: \n");
        scanf("\t%c",&op);

    if (op == '1'){ // repete a função soma
        system("cls");
        Soma();
    }
    else if (op== '2'){
        system("cls");  // retorna ao menu caso "2 não"
        printf("\t\tVoltando ao Menu Principal...\n");
        getchar();
        sleep(1);
        MainMenu();

    }
    else {
            system("cls");
            printf("\t\t Valor inválido! Tente novamente...\n");
            sleep(1);
            getchar();
            Soma();

        }
}
// fim da função soma
void Subtracao(){
int n1, n2, subtr;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       SUBTRAÇÃO"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro número: ");
        scanf("%d",&n1);
                                                 // campo para usuário inserir valores
    printf("\t Informe o segundo número: ");
        scanf("%d",&n2);

    subtr=n1-n2; // cálculo
    printf("\n\tO resultado da operação entre %d - %d é: %d", n1, n2, subtr);
    getchar();

    printf("\n\tDeseja realizar outro cálculo? (1) SIM (2) NÃO: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls"); // repete a funcção subtração
        Subtracao();
    }
    else {
        system("cls"); // retorna ao menu
        MainMenu();
    }
}
// fim da funçao subtração

void Divisao(){
float divis,n1,n2;
char op;

    printf("\t\t=======================");
    printf("\n\t\t       DIVISÃO"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro número: ");
        scanf("%f",&n1);
                                                // campo para usuário inserir valores
    printf("\t Informe o segundo número: ");
        scanf("%f",&n2);

    divis=n1/n2; // cálculo
    printf("\n\tO resultado da operação entre %0.f / %0.f é: %.1f", n1, n2, divis);
    getchar();

    printf("\n\tDeseja realizar outro cálculo? (1) SIM (2) NÃO: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls");  // repete a função divisão
        Divisao();
    }
    else {
        system("cls"); // retorna ao menu
        MainMenu();
    }
}
// fim da função divisão

void Multiplicacao(){
int n1, n2, multi;
char op;

    printf("\t\t=======================");
    printf("\n\t\t      MULTIPLICAÇÃO"     );
    printf("\n\t\t=======================");

    printf("\n\t Informe o primeiro número: ");
        scanf("%d",&n1);
                                                // campo para usuário inserir valores
    printf("\t Informe o segundo número: ");
        scanf("%d",&n2);

    multi=n1*n2; // cálculo
    printf("\n\tO resultado da operação entre %d * %d é: %d", n1, n2, multi);
    getchar();

    printf("\n\tDeseja realizar outro cálculo? (1) SIM (2) NÃO: \n");
        scanf("\t%c",&op);

    if (op == '1'){
        system("cls");  // repete a função multiplicação
        Multiplicacao();
    }
    else {
        system("cls");  // retorna ao menu
        MainMenu();
    }
}
// fim da função multiplicação


int main (){
setlocale(LC_ALL, "Portuguese");

   MainMenu(); // chama a função tela menu principal

}
