#include<iostream>
using namespace std;
int main (){
    int n=2,m=3;
    int mat[n][m] = {{1, 2, 3},
                     {4,5,6}};
    
   
// create transpose mattrix 
//space complextiy                    
int transpose[m][n] = {{0}};

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        transpose[j][i] = mat[i][j];
       }
       
    }
    
// print transpose 
for (int i = 0; i < m; i++)
{
for (int j = 0; j < n; j++)
{
  cout << transpose[i][j]<< " ";
}
cout <<endl;
}



}