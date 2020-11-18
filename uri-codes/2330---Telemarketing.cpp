#include <cstdio>
#include <queue>

#define MAXN 1010
#define MAXL 1000100

using namespace std;

int n, l, t, qtd[MAXN];

struct atendente{ // declaro a struct atendente
    
    int id, livre; // ela terá dois inteiros como membros
    
    // terá um construtor para atribuir valores aos membros
    atendente(int id_, int livre_=0){ id=id_; livre=livre_; } 
    
    // terá também um operador >, para compará-la com outro atendente

    // note que a priority_queue ordena do maior para o menor
    // logo este operador deve retornar true se a struct vem antes na ordenação
    bool operator >(const atendente x) const{
        
        // se eles ficarem livres em momentos diferentes
        if(livre!=x.livre) return livre<x.livre; // ele retorna o que fica livre antes
        return id<x.id; // caso contrário, retorna o de menor id
    }
    
    // crio também o operador < de maneira análoga ao >
    bool operator <(const atendente x) const{
        
