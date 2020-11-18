#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector <int> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto num = find(v.begin(),v.end(),x);
        v.erase(num);
    }
    
    for (auto i = v.begin();i <  v.end(); i++)
    {
        cout << *i;
        if(i != v.end()-1)
            cout << " ";
        else
            cout << "\n";
    }
    
    return 0;
