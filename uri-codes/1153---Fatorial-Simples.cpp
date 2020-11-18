#include <iostream>
using namespace std;
long long int fat(int n);
int main(){
    int n,m;
    while (true) {
    std::cin >> n;
    if (!std::cin)
        break;
    
    
    cout << fat(n) << "\n";
    }
}
long long int fat(int n){
    if ((n==1) || (n==0)) return 1;               
    else
        return fat(n-1)*n;
}
