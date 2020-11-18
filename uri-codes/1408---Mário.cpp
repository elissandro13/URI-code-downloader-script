#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,l;
    vector <int> vet;
    while(cin >> n >> l){
        if(n == 0 && l == 0){
            break;
        }
        vet.clear();
        vet.resize (l, 0);
        for (size_t i = 0; i < l; i++)
        {
            cin >> vet[i];
        }
        int maior = 0, pos = 0;
        for (int i = 0; i < l; i++)
        {

            pos = upper_bound (vet.begin(), vet.end(), vet[i]+n-1) - vet.begin();
            maior = max (pos-i, maior);
        }
        cout << n - maior << "\n";
        
        
    }
    return 0;
