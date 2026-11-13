#include<iostream>
using namespace std;
void convert2d(int *arr,int length, int m, int n){
    int mat[m][n]={{0}};
for (int i = 0; i < length; i++)
{
    if (m*n== length)
    {
       for (int j = 0; j < m; j++)
       {
        m=j;
        
       }
       
    }
    
}

}

int main(){
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(int);
    cout<<length<<endl;
}