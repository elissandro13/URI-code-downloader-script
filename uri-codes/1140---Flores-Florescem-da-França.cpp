#include <bits/stdc++.h>

using namespace std;


int main(){

    while(true){
        string str;
        //vector<string> result;
        getline(cin,str);

        if(str[0] == '*')
            break;

        //cout << str;
        char inicial = tolower(str[0]);
        //cout << inicial;
        istringstream iss(str);
        string saida = "Y";
        for (str;  iss >> str;)
        {
            // result.push_back(str);
            if(tolower(str[0]) != inicial){
                saida = "N";
                break;

            }

        }

