#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout << "enter no of rows"<<endl;
    cin>> rows;
    cout << "enter no of cols"<<endl;
    cin>> cols;

    int* *matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
      matrix[i] = new int[cols];
    }

    //data store
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
    for (int j = 0; j < cols; j++)
    {
        matrix[i][j] = x++;
        cout << matrix[i][j]<< " ";
    }
    cout << endl;
    }
    
    cout<< "matrix[2][1] is "<<matrix[2][1] << endl;
}