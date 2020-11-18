#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;




int main(){
   int n;
   scanf("%d" ,&n);
   while(n--){
       int t;
       scanf("%d" ,&t);
       int v[t];
       int x;
       for (int i = 0; i < t; i++)
       {

           scanf("%d" ,&v[i]);
       }
       sort(v,v+t);
       for (int i = 0; i < t-1; i++)
       {
           printf("%d ",v[i]);

       }
       printf("%d\n",v[t-1]);
   }
    
    
