#include <bits/stdc++.h>


using namespace std;
#define MAX (1e5 + 1)

int main() {

    int a,b;
    while (cin >> a >> b )
    {
        if(a == 0 && b == 0)
            break;
        int x;
        vector<bool> v(MAX,false);
        vector<bool> m(MAX,false);
        for (size_t i = 0; i < a; i++)
        {
            scanf("%d", &x);
            v[x] = true;
        }
        for (size_t i = 0; i < b; i++)
        {
            scanf("%d", &x);
            m[x] = true;
        }
        int qA,qB;
        qA = qB = 0;
        for (int i = 0; i < MAX; i++)
        {
            if(v[i] && !m[i])qA++;
