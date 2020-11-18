#include <bits/stdc++.h>
using namespace std;

vector<string> renas;
vector<int> peso,idade;
vector<double> altura;
vector<int> ordem;

bool ordena(int x,int y){
    if(peso[x] != peso[y]) return peso[x] > peso[y];

    else if(idade[x] != idade[y]) return idade[x] < idade[y];

    else if(altura[x] != altura[y]) return altura[x] < altura[y];
    else
        return renas[x] < renas[y];


}
int main(){
    int t;
    int cont = 1;
    cin >> t;
    while(t--){        
        int n,m;
        cin >> n >> m;
        renas.resize(n);
        peso.resize(n);
        idade.resize(n);
        altura.resize(n);
        ordem.resize(n);
