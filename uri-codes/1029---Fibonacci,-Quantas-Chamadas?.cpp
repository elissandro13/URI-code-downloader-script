#include <bits/stdc++.h>
using namespace std;

int cont;

int fib(int n){
    cont++;
    if(n == 1)
        return 1;
    else if(n == 0)
        return 0;
    return fib(n-1) + fib(n-2);
}
int main(){
    int t;
    cin >> t;
    while(t--){        
        int n;
        cin >> n;
        cont = 0;
        int f = fib(n);
        printf("fib(%d) = %d calls = %d\n",n,cont-1,f);
    }
    
    return 0;
}
