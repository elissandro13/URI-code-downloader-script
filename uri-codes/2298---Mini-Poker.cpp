#include <iostream>
using namespace std;


int main(){
    int n;
    int vez = 0;
    cin >> n;
    while(n--){
        int v[15];
        int x,c = 0;
        int pontos = 0;
        int posTrinca = 0,posQuadra = 0,quadra = 0,trinca = 0,temDupla = 0,quinta = 0,posQuinta = 0, posDupla2 = 0, posDupla = 0;
        for (int i = 0; i < 15; ++i)
        {
            v[i] = 0;
            
        }
        for (int i = 0; i < 5; ++i)
        {
            cin >> x;
            v[x]++;
        }
        // for (int i = 0; i < 5; ++i)
        // {
        //  cout << "V[" << i << "]: " << v[i]; 
        
        // }
        // cout << "\n";
        for (int i = 0; i < 15; ++i)
        {
