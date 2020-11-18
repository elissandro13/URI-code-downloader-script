#include <bits/stdc++.h>

#define MAXN 10010
using namespace std;
int h,l,color,contador,m[MAXN][MAXN];

bool vis[MAXN][MAXN] = {0};

bool validar(int i,int j,int color){
    if(i>=0 && i<h && j>=0 && j<l)
    {
        if(m[i][j]==color)
            return true;
    }
    return false;
}

void dfs(int i,int j,int color){
    vis[i][j] = true;
    contador++;
    if(validar(i-1,j,color) && !vis[i-1][j])
        dfs(i-1, j,color);
    if(validar(i,j-1,color) && !vis[i][j-1])
        dfs(i, j-1,color);
    if(validar(i+1,j,color)&& !vis[i+1][j])
        dfs(i+1, j,color);
    if(validar(i,j+1,color)&& !vis[i][j+1])
        dfs(i, j+1,color);
}
int main(){
    cin >> h >> l;
