#include <bits/stdc++.h>
using namespace std;

struct consulta
{
    int inicio,fim;
};

bool compara(consulta a,consulta b){
    return a.fim < b.fim;
}
int main(){
    int n;
    cin >> n;
    consulta consultas[n];
    for(int i = 0;i < n;i++){
        cin >> consultas[i].inicio >> consultas[i].fim;
    }
    sort(consultas,consultas+n,compara);

    int horaLivre = 0,cont = 0;
    for (int i = 0; i < n; i++)
    {
        if(consultas[i].inicio >= horaLivre){
            cont++;
            horaLivre = consultas[i].fim;
        }
    }
    
    cout << cont << "\n";
    return 0;
}
