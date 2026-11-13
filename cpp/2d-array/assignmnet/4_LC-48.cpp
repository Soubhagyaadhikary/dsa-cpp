#include<iostream>
using namespace std;
int main(){

    int matrix[3][3] = {{1, 2, 3},
                    {4,5,6},
                    {7,8,9}};
int n=3;

//st-1: transpose
for (int i = 0; i < n; i++)
{
  for (int j = i+1; j < n; j++)
  {
   swap(matrix[i][j], matrix[j][i]);
  }
  
}

//st-2: reverse a row
for (int i = 0; i < n; i++)
{
  for (int j = 0; j < n/2; j++)
  {
   swap(matrix[i][j], matrix[i][n-j-1]);
  }
  
}
//st-3: print

for (int i = 0; i < n; i++)
{
  for (int j = 0; j < n; j++)
  {
    cout << matrix[i][j]<< " ";
  }
  cout<<endl;
  
}



}