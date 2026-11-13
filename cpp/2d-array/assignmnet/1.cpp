#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{1,4,7},{1,7,8}};
    int n = 2, m =3;

    int count7 = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (arr[i][j] == 7)
        {
           count7++;
        }
        
      }
      
    }
    cout <<"no of 7 is "<< count7 <<endl;

}