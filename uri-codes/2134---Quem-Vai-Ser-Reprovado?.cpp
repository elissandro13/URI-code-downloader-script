#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int instancia = 1;
    int entrada = 0;
    vector< pair<string, int> > nomes;
    
    while(cin >> entrada)
    {
        nomes.clear();
        for (int i = 0; i < entrada; i++)
        {
            string nome =  "";
            int nota = 0;
        
            cin >> nome >> nota;
            pair<string, int> p(nome, nota);
            nomes.push_back(p);
        }
        
        sort(nomes.begin(), nomes.end());
        // for (size_t i = 0 ; i < 4; i++)
        // {
        //     cout << nomes[i].first << endl;
        // }
