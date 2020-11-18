#include <bits/stdc++.h>

using namespace std;
int p,r;
bool checar[1000];
map <string,int> pessoas;
vector <int> lista[1000];

void dfs(int x){
    for (int i = 0; i < (int)lista[x].size(); i++)
    {
        int  indiv = lista[x][i];
        if(!checar[indiv]){
            checar[indiv] = true;
            dfs(indiv);
        }
    }
    
}
int main(){
    int cont = 0;
    string pessoa1,pessoa2,relacao;
    for (int i = 0; i < p; i++)
    {
        checar[i] = false;
    }
    
    cin >> p >> r;
    cin.ignore();
    for (int i = 0; i < r; i++)
    {
