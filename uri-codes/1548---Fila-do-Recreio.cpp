#include <bits/stdc++.h>
using namespace std;

vector<int> v,m;
int cont = 0;

bool troca(int x,int y){
    return x > y;
}
int main(){
    int t;
    cin >> t;
    while(t--){        
        int n;
        cin >> n;
        v.resize(n);
        m.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
            v[i] = m[i];
        }
        
        cont = 0;
        sort(m.begin(),m.end(),troca);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << m[i];
        // }
        
        for (int i = 0; i < n; i++)
