#include <bits/stdc++.h>

#define MAXN 100100
using namespace std;
bool compare(int a,int b){
    return a > b;
}
int main(){
    int a,v;
    int round = 0;
    while(true){
        cin >> a >> v;
        if(a == 0 && v == 0){
            break;
        }
        int x,y;
        int maior = 0;
        int m[a+1] = {0};
        for (int i = 0; i < v; i++)
        {
            cin >> x >> y;
            m[x]++;
            m[y]++;
        }

        for (int i = 1; i <= a; i++)
        {
                if(maior < m[i]){
                    maior = m[i];
                }
        }
