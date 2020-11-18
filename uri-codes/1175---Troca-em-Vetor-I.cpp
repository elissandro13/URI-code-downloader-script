#include <iostream>
 
using namespace std;
 
int main() {
 
   int v[21];
   int cout = 0;
   for(int i = 0;i< 20;i++)
        scanf("%d", &v[i]);
    for(int i = 19;i >= 0;i--)
        printf("N[%d] = %d\n",cout++,v[i]);
 
    return 0;
}
