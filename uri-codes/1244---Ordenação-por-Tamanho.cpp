#include <bits/stdc++.h>
using namespace std;

vector<string> v;
int cont = 0;

bool ordena(string a,string b){
    return (a.size() > b.size());
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){        
        string str;
        getline(cin,str);
        stringstream x(str);
        while(x >> str){
            v.push_back(str);
        }
        stable_sort(v.begin(),v.end(),ordena);
        for (auto it = v.begin(); it < v.end(); it++)
        {
            cout << *it;
            if(it != v.end()-1)
                cout << " ";
            else
                cout << endl;
            
        }
        v.clear();                           
