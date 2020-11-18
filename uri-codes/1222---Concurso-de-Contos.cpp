#include <bits/stdc++.h>

using namespace std;

int main(){
    int linhas,palavras,letras;

    while(cin >> palavras >> linhas >> letras){
        int contLinhas = 0, paginas = 0, contLetras = 0;
        string entrada;
        for (int i = 0; i < palavras; i++)
        {
            cin >> entrada;

            contLetras += entrada.size();

            if(contLetras == letras){
                contLinhas++;
                contLetras = 0;
            }
            else if(contLetras > letras){
                contLinhas++;
                contLetras = entrada.size() + 1;
            }

            else if(i < palavras - 1){
                contLetras++;
                // add space between words

                if(contLetras == letras){
                    contLinhas++;
