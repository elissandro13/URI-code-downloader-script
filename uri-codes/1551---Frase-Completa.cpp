#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        bool v[26];
        int cont = 0;
        for (int i = 0; i < 26; i++)
        {
            v[i] = false;
        }
        string str;
        cin.ignore();
        getline(cin,str);
        char a =  'a';
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] >= a && str[i] <= 'z'){
                int pos = int(str[i]) - 97;
                if(v[pos] == 0){
                    cont++;
                    v[pos] = 1;
                }
            }
        }
        if(cont == 26){
            cout << "frase completa\n";
        } else if(cont >= 13){
