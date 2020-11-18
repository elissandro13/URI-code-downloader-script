#include <bits/stdc++.h>
using namespace std;

long long int calcularTrabalho(int vizinhos[],int n){
    long long int unidadeTrabalho = 0;

    for (int  i = 0; i < n; i++)
    {
        unidadeTrabalho += abs(vizinhos[i]);
        if(i < n-1)
            vizinhos[i+1] += vizinhos[i];
    }
    

    return unidadeTrabalho;
}


int main(){

    int n;
    while(cin >> n){
        if(n == 0)
            break;
        
        int vizinhos[n];
        for (int i = 0; i < n; i++)
        {
            cin >> vizinhos[i];
        }

