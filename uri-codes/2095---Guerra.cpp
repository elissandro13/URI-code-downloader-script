#include <bits/stdc++.h>


using namespace std;
bool desc(int a,int b){
    return a > b;
}
int main(){

    int n;
    cin >> n;
    int cont = 0;
    int q[n],noh[n];
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> noh[i];
    }

    sort(q,q+n,desc);
    sort(noh,noh+n,desc);


    
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if(q[i] < noh[a]){
