#include  <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    while(n--){
        cin >> a >> b;
        if(a > b){
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        int soma = 0;
        // cout << a << b;
        for (int i = a+1; i < b; i++)
        {
            if(i % 2 != 0)
                soma += i;
        }
        cout << soma << "\n";
    }
    
    return 0;
}
