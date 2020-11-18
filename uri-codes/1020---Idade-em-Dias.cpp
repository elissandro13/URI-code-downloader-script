#include <stdio.h>

using namespace std;

int main()
{
    int mes,ano,dia,resto;
    scanf("%d",&dia);
    ano = dia/365;
    resto = dia%365;
    mes = resto/30;
    resto = resto%30;
    dia = resto;

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);


    return 0;
}

