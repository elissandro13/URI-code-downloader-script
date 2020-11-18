#include <bits/stdc++.h>

using namespace std;
bool compare(int a,int b){
    return a > b;
}

int main(){
    int n,g;
    int dis[10010],aux[10010];
    while(cin >> n >> g){
        aux[0] = 0;
        dis[0] = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> aux[i];
            dis[i] = aux[i] - aux[i-1];
        }
        
        sort(dis,dis+n);
        int sum = 0;

        for (int i = 0; i <= n-g; i++)
        {
            sum += dis[i];
        }

        cout << sum << endl;


    }
