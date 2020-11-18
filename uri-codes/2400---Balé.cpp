#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
#define MAXT 100005
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    
    int A[MAXT];
    for(int i = 0;i<n;i++) scanf("%d",&A[i]);
    
    int resp=0;
    int key = 0;
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > key){
            A[j+1] = A[j]; 
            j--;
            resp++;
        }
        A[j+1] = key;
        
    }

    //for(int i = 0;i<n;i++) printf("%d ",A[i]);

    printf("%d\n",resp);
