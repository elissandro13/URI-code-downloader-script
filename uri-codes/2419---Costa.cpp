#include <bits/stdc++.h>

using namespace std;
int n,m;
char v[10010][10010], c[10010][10010];
int x[] = { -1,  0,  0,  1 };
int y[] = {  0, -1,  1,  0 };
bool isInside(int i,int j){
    return 0 <= i && i < n && 0 <= j &&  j < m;
}
bool check(int i,int j){
    for (int k = 0; k < 4; k++)
    {
        if(v[i+x[k]][j+y[k]] == '.' || !isInside(i+x[k],j+y[k])){
            return true;
        }
    }
    return false;
    
}
int main(){

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            c[i][j] = v[i][j];
        }
        
