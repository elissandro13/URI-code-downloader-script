#include <iostream>
using namespace std;


int main(){
    int n,quantidade,saida,entrada,soma = 0;
    cin >> n >> quantidade;
    int flag = 0;
    for (int i = 0; i < n; ++i)
     {
        cin >> saida >> entrada;
        soma += entrada - saida;
        if(soma > quantidade){
            flag = 1;
            break;
        }

     }
     if(flag == 1)
        cout << "S\n";
     else 
        cout << "N\n";
}
