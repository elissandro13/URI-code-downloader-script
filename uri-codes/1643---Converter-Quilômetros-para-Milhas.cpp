#include <bits/stdc++.h>

using namespace std;


int main(){

    long long int fib[50];
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i < 46; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    int n,m,ans;
    cin >> n;
    while(n--){

        int i = 45;
        ans = 0;
        cin >> m;
        while(i > 1){
            if(fib[i] <= m)
                m-=fib[i],ans += fib[i-1];
            i--;
        }
        cout << ans << endl;

        

