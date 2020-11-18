#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int diametro = d*2;
    int diagonal = sqrt((a*a) + (b*b) + (c*c));
    if(diagonal <= diametro)
        cout << "S\n";
    else 
        cout << "N\n";
 
    return 0;
}
