#include <bits/stdc++.h>

using namespace std;

int binarySearch(int vet[], int begin,int end,int num){
    int mid;
    mid = (begin+end)/2;
    if(begin <= end){
        if(vet[mid] ==  num){
            return mid;
        }
        else if (vet[mid] > num)
        {
            return binarySearch(vet,begin,mid-1,num);
        }
        else if(vet[mid] < num)
        {
            return binarySearch(vet,mid+1,end,num);
        }
    }
    else {
        return -1;
    }

}


int main(){

    int n;
    while (cin >> n)
