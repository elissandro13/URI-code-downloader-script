#include <bits/stdc++.h>
using namespace std;

int main(){

    while(true){
        string n;
        int i = 0;
        int total = 0;
        double cont = 0;
        getline(cin,n);
        while(i < n.size()){

            

            if(n[i] == '\0' || n[i] == '*'){
                break;
            } else if(n[i] == '/'){
                if(cont == 1.0){
                    total++;
                }
                cont = 0;
                //cout << "YuY";

            }

            if(n[i] == 'W'){
                cont += 1.0;
            } else if(n[i] == 'H'){ 
                cont += 0.5;
            } else if(n[i] == 'Q'){
