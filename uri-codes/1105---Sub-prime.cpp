#include <bits/stdc++.h>

using namespace std;

int main(){
    int b,n;
    int banco[1000];

    while(cin >> b >> n){
        if(b == 0 && n == 0)
            break;
        int flag = 0;
        for (int i = 1; i <= b; i++)
        {
            cin >> banco[i];
        }
        // int d,k,v;
        for (int i = 0; i < n; i++)
        {
            int d, c, v; 
            scanf("%d %d %d", &d, &c, &v);
            
            banco[d] -=  v;
            banco[c] +=  v; 
        }

        for (int i = 1; i <= b; i++)
        {
            if(banco[i] < 0){
                flag = 1;
                break;
