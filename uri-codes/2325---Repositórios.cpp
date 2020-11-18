#include <bits/stdc++.h>

using namespace std;

int main(){

    map <int,int> cliente;
    map <int,int> net;

    set<int> prog;
    int n,d;

    cin >> n >> d;
    int num = 0,ver = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num >> ver;
        cliente[num] = ver;
        prog.insert(num);
    }

    for (int i = 0; i < d; i++)
    {
        cin >> num >> ver;
        
        prog.insert(num);

        if(net.find(num) != net.end()){
            if(net[num] < ver){
                net[num] = ver;
            }
