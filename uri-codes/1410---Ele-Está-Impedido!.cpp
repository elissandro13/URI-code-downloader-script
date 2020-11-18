#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;



int main(){
    int a,d;
    while (cin >> a >> d)
    {
        vector <int> v(a);
        vector <int> x(d);
        if(a == 0 && d == 0)   
            break;
        for (size_t i = 0; i < a; i++)
        {
            cin >> v[i];
        }
        for (size_t i = 0; i < d; i++)
        {
            cin >> x[i];
        }
        
        sort(v.begin(),v.end());
        sort(x.begin(),x.end());
        if(v[0] >= x[1] || v[0] == x[1] && v[0] == x[0])
            cout << "N\n";
        else 
            cout << "Y\n";
