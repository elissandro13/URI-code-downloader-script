#include <bits/stdc++.h>

using namespace std;
int m,n;
#define MAXN 100100
bool checar[MAXN];
vector <int> lista[MAXN];

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
    int pessoa1,pessoa2;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        checar[i] = false;
    }
    

    for (int i = 0; i < n; i++)
    {
