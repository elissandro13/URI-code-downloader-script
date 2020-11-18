#include <cstdio>
#include <algorithm>

using namespace std;

#define MAXN 10010

int n, k, p, vet[MAXN];

// função que testa se posso alimentar todas as pessoas
// com pedaços de pão de tamanho x
bool ok(int x){
    
    // qtd será o número de pessoas atendidas
    int qtd = 0;
    
    // para cada pão
    for(int i = 1; i <= k; i++){
        
        // adiciono a qtd o número de pedaços em que posso dividi-lo
        qtd += vet[i]/x;
        
        // e se esse número superar qtd, retorno true
        if(qtd >= n) return true;
    }
    
    // caso eu percorra todos os pães
    //e ainda não tenha atendido odas as pessoas
    return false; // retorno false
}

