#include <iostream>

using namespace std;

int main()
{
  int n,k,max = 0,flag = 0;
  cin >> n >> k;
  int m[n+1][n+1];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      m[i][j] = 0;
    }
    
  }
  int x,y,value;
  for (int a = 0; a < k; a++)
  {
    cin >> x >> y >> value;
    for (int i = 0; i < n; i++)
    {
      for (int  j = 0; j < n; j++)
      {
        if(abs(i-x) + abs(j-y) == value){
          m[i][j]++;
        }
        if(m[i][j] > max){
          max = m[i][j];
        }
