#include <iostream>
using namespace std;


int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            cout << "\n";
            break;
        }   
        int x,y;
        int lados = 0;
        int res;
        for (int i = 0; i < n; ++i)
        {
            cin >> x >> y;
            lados += y/2;
            //cout << "r " << lados << "\n";
        }
        //cout << "r " << lados << "\n";
        res = lados/2;
        cout << res << "\n";
    }
}
