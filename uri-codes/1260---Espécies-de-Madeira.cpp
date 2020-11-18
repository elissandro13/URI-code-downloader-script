#include <map>
#include <string>
#include <iostream> 
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--){
        map<string,int> trees;
        trees.clear();
        int total = 0;
        string str;
        while(getline(cin,str) && str != ""){
            trees[str]++;
            total++;
        }
        auto it = trees.begin();
        while(it != trees.end()){
            string word = it->first;
            float num = it->second;
            cout << word << " " << fixed << setprecision(4) << (num*100)/total << endl;
            it++;
        }
        if(n)
            puts("");
