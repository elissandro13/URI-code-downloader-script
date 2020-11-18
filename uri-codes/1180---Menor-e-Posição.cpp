#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[1001];
    int n, menor,pos,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x; 
        if(i == 0){
            menor = v[0];
            pos = 0;
        }
        if(v[i] < menor ){
            menor = v[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << "\n";
    cout << "Posicao: " << pos << "\n";
    
    return 0;
}
