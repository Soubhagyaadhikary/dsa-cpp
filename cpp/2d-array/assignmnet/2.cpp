#include<iostream>
using namespace std;
int main(){
    //print out the sum of the numbers in the second row of the“nums” array


    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13,14,15,16}};
int n=4,m=4;
int sum = 0;
for (int j = 0; j < m; j++)
{
   sum+= matrix[1][j];
}

cout<< "sum of 2nd row is " << sum<<endl;

}