#include<iostream>
using namespace std;


int search1(int mat[][4],int n, int key){
// TC : O(n*m)
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (mat[i][j] == key)
        {
           cout << "found at cell ("<< i << "," << j << ")\n";
        }
        
    }
    
}

}

//TC : O(n+m)
bool search(int mat[][4],int n, int m, int key){
    int i = 0, j = m-1;

    while (i < n && j >= 0)
    { // cel = mat[i][j]
      if (mat[i][j] == key)
      {
        cout << "found at cell ("<< i << "," << j << ")\n";
        return true;
      }else if (mat[i][j] > key) //left
      {
        j--;
      }else{//down
        i++;
      }
    }
    cout << "key not found\n";
    return false;
    
}

int main(){
        int matrix[4][4] = {{10, 20, 30, 40},
                            {15, 25, 35, 45},
                            {27, 29, 37, 48},
                            {32,33,39,50}};

    search(matrix,4,4,50);

    
}