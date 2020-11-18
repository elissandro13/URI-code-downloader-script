//URI Online Judge | 1228
#include <iostream>

using namespace std;
 int main(){
    int saida[24];
    int chegada[24];
    int mapa[24];
    int tam;

    while(cin >> tam){

        int ultrapassagens = 0;
        int aux = 0;
        for (size_t i = 0; i < tam; i++)
        {
            cin >> saida[i];
        }

        for (size_t i = 0; i < tam; i++)
        {
            cin >> chegada[i];
        }
        for (size_t i = 0; i < tam; i++)
        {
            for (size_t j = 0; j < tam; j++)
            {
                if(saida[i] == chegada[j]){
                    mapa[j] = 25 + i ;

                }
