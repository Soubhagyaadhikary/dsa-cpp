#include<iostream>
using namespace std;



int diagonalSum(int mat[][3], int n){
    int sum = 0;

//TC : O(N^2)
    // for (int i = 0; i < n; i++)//rows
    // {
    //   for (int j = 0; j < n; j++)//columns
    //   {
    //     if (i == j)
    //     {
    //        sum+= mat[i][j];
    //     }else if (j == n-i-1)
    //     {
    //       sum += mat[i][j];
    //     }               
    //   }      
    // }


//TC : O(N)
for (int i = 0; i < n; i++)
{// because of i=j not need another loop
   sum+= mat[i][i];//pd
   if (i != n-i-1)
   {
    sum += mat[i][n-i-1];//sd
   }
   
}


    cout << "sum is : "<< sum<< endl;
    return sum;
    
}

int main(){
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13,14,15,16}};
    int matrix2[3][3] = {{1, 2, 3},
                        {4,5,6},
                        {7,8,9}};

    diagonalSum(matrix2, 3);
    return 0;
}