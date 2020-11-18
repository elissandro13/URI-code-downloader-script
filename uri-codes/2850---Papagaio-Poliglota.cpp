#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        if(s[0] == 'e')
            cout << "ingles\n";
        if(s[0] == 'd')
            cout << "frances\n";
        if(s[0] == 'n')
            cout << "portugues\n";
        if(s[0] == 'a')
            cout << "caiu\n";
            
    }
    return 0;
}
