#include <bits/stdc++.h>
using namespace std;

vector<int> m;
int cont = 0;

bool troca(int x,int y){
    if(x > y){
        return false;
    }
    cont++;
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){        
        int n;
        cin >> n;
        m.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        cont = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(m[i] > m[j]){
                    int aux = m[i];
