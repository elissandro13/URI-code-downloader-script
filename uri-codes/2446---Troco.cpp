#include <cstdio>

char resposta='N';
int v, m;
bool matriz[1010][100010];
int moeda[1010];

void busca(int coin, int soma) // função recursiva da PD Top-Down
{
    if(matriz[coin][soma]) return; // se já tivermos calculado esse estado da PD, a função retorna
    
    matriz[coin][soma]=1; // marcamos o estado atual como calculado
    
    if(soma==v) // se a soma for o valor desejado
    {
        resposta='S'; // resposta recebe 'S'
        return; // e a função retorna
    }
    
    // Se játivermos t=olhado todas as moedas, ou superado a soma desejada
    if(coin>m || soma>v) return; // a função retorna

    busca(coin+1, soma+moeda[coin]); // testamos todas a possibilidades com a moeda atual
    busca(coin+1, soma); // testamos todas a possibilidades sem a moeda atual
}

int main ()
{
    scanf("%d %d", &v, &m); // lemos os valores de v e m
    
    for(int i=1; i<=m; i++) scanf("%d", &moeda[i]); // lemos os valores de cada moeda
