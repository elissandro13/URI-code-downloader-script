#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tempo,ligadoAte,x;
    tempo = ligadoAte = 0;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++)
    {
        cin >> x;
        if(x >= ligadoAte){
            tempo += 10;
        } else 
            tempo += x + 10 - ligadoAte;
        ligadoAte = x + 10;


    }
    cout << tempo << endl;
    
    
    return 0;
}
