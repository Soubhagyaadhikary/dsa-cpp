#include<iostream>
using namespace std;

void printarr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<" ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n){
    for (int i = 0; i < n-1; i++){
        bool isswap = false;
        for (int j = 0; j < n-i-1; j++)
        {
        if (arr[j] < arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           isswap = true;
        }
        
        }
        if (!isswap)
        {
          // array is already sorted
          return;
        }
        
    }
    printarr(arr,n);
}

int main(){
    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
}