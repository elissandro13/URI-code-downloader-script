#include <cstdio> // scanf e printf

#define MAXT 1000100 // defino o limite para o tamanho da pilha

int n, saida[MAXT], pilha[MAXT], tam; // declaro as variáveis que vou usar

//funções da pilha
void pop(){ if(tam>0) tam--; }
void push(int x){ pilha[++tam]=x; }
void clear(){ tam=0; }

int top(){ return pilha[tam]; }

int main(){
    
    while(scanf("%d", &n) && n!=0){ // para cada caso de teste
        
        while(scanf("%d", &saida[1]) && saida[1]!=0){ // e para cada exemplo de saída
            
            for(int i=2; i<=n; i++) scanf("%d", &saida[i]); // termino de ler a ordem de saída
            
            clear(); // limpo a pilha
            
            int j=1; // inicializo o int j, o próximo vagão que irá entrar
            
            push(j++); // coloco o vagão j na ferrovia e aumento o seu valor
            
            bool deu_errado=false; // variável controle, que guarda se não foi possível
            
            for(int i=1; i<=n; i++){ // para cada vagão na ordem de saida
                
