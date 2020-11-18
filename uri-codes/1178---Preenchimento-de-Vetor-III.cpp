#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,r;
    scanf("%lf",&n);
    for (int i = 0; i <= 99; i++)
    {   
        printf("N[%d] = %.4lf\n",i,n);
        n = n/2;
    }
    
    return 0;
}
