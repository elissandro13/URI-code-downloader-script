#include <iostream>
#include <queue>
 
class Dragao{
public:
    long long int diaAtual,diaMulta,multa;
    Dragao(int diaAtual, int diaMulta, int multa){
        this->diaAtual=diaAtual;
        this->diaMulta = diaMulta;
        this->multa = multa;
    }
 
    bool operator<(const Dragao& dg) const{
        return dg.diaMulta*multa < dg.multa*diaMulta;
    }
};
using namespace std;
int main(){
    priority_queue<Dragao> dragoes;
    long long int diaAtual = 0,diaCorrido=0;
    long long int totalMulta=0;
    long long int dia,multa;
    while(cin >> dia >> multa){
            dragoes.push(Dragao(diaAtual,dia,multa));
            if(diaCorrido==0){
                Dragao dg = dragoes.top();
                dragoes.pop();
                totalMulta+=(diaAtual-dg.diaAtual)*dg.multa;
                diaCorrido=dg.diaMulta;
            }
            diaCorrido--;
