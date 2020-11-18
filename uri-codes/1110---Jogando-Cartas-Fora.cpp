#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n){
        if(n == 0)
            break;
        
        queue <int> q;

        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        cout << "Discarded cards:";
        while(q.size() >= 2){
            cout << " " << q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            if(q.size()>= 2) cout << ",";
        }
        cout << "\nRemaining card: " << q.front() << "\n";
    }
    return 0;
}
