#include <bits/stdc++.h>

using  namespace std;

int main(){
    string n;
    while(cin >> n){
        int cont = 0;
        string p = "";
        // cout << n;
        int flag = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if(n[i] == '(' || n[i]== ')' ){
                p += n[i];
            }
        }
        stack <char> s;
        for (int i = 0; i < p.size(); i++)
        {
            if(p[i] == '('){
                s.push(p[i]);
            }
            else {
                if(s.empty()){
                    flag = 1;
                    break;
                } else {
                    s.pop();
                }
            } 
