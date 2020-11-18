#include <bits/stdc++.h>

#define MAXN 100100
using namespace std;

int guilda[MAXN],v[MAXN],pontos[MAXN];
int rafael;

int find(int x){
    if(guilda[x] == x){
        return x;
    }

    return guilda[x] =  find(guilda[x]);
}
void join(int x,int y){
    x = find(x);
    y = find(y);

    if(x == y)
        return;

    guilda[y] = x;
    pontos[x] += pontos[y];
    v[x] += v[y];
    if (rafael == y) rafael = x;

}
int main(){

    int n,m;
