#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    set <string> pok;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        pok.insert(s);
    }
    cout << "Falta(m) " << 151-pok.size() << " pomekon(s).\n";
    
    return 0;
}
