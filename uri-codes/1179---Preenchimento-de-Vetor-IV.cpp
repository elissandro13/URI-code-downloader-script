#include <bits/stdc++.h>

using namespace std;

int main(){
    int imprimidos,pares,impares;
    pares = 0;
    impares = 0;
    int x,p[15],im[15];
    for (int i = 0; i < 15; i++)
    {
        cin >> x;
        imprimidos++;
        if(x % 2 == 0){
            p[pares] = x;
            pares++; 
        }
        else if (x % 2 != 0){
            im[impares] = x;
            impares++; 
        }
        if(pares == 5){
            for (int j = 0; j  < 5; j++)
            {
                printf("par[%d] = %d\n",j,p[j]);
                pares  =0 ;
            }
            
        }
        if(impares == 5){
            for (int j = 0; j  < 5; j++)
