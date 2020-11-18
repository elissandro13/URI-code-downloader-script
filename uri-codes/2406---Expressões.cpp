#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    while(n--){
        string e;
        cin >> e;
        stack <char> s;
        int flag = 0;
        for (int i = 0; i < e.size(); i++)
        {
            if(e[i] == '(' || e[i] == '{' || e[i] == '['){
                s.push(e[i]);
            } else {
                if(s.empty()){
                    flag = 1;
                    break;
                }
                else if(e[i] == ')' && s.top() == '('){
                    s.pop();
                } else if (e[i] == ']' && s.top() == '['){
                    s.pop();
                } else if (e[i] == '}' && s.top() == '{'){
                    s.pop();
                } else {
                    flag = 1;
                    break;
                }
