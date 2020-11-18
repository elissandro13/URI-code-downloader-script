#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0){
            cout << "NULL\n";
        }
        else if(x % 2 == 0){
            cout << "EVEN";
        }
        else if(x % 2 != 0) {
            cout << "ODD";
        }
        if(x > 0){
            cout << " POSITIVE\n";            
        }
        if(x < 0) {
            cout << " NEGATIVE\n";
        }
    }
    return 0;
    
}
