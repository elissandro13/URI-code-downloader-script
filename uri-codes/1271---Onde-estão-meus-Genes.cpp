#include  <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,b,x,k;
    int vez = 0;
    while (cin >> n)
    {
        if(n == 0)
            break;
        int map[50010];
        // int v[10000];
        cin >> x;
        vector <pair<int,int>> p;
        for (int i = 1; i <= n; i++)
        {
            map[i] = i;
            // v[i] = i;
        }

        for (int i = 0; i < x; i++)
        {
            cin >> a >> b;
            p.push_back(make_pair(a,b));

        }
        reverse(p.begin(),p.end());
        
        for (int i = 0; i < x; i++)
        {
            a = p[i].first;
            b = p[i].second;
            int cont = 0;
            for (int j = a; j <= b; j++)
            {               
                swap(map[j],map[b]);
                b--;
            }
            // for (int q = ; q <= n; q++)
