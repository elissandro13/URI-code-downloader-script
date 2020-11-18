#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(a == b){
            break;
        }     
        if(a < b){
            cout << "Crescente\n";
        }
        else {
            cout << "Decrescente\n";
        }
    }
    return 0;
}
