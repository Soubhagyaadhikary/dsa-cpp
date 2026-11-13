#include<iostream>
using namespace std;
void printarr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<" ";
    }
    cout << endl;
}
//Tc = O(n^2)
void selectionSort(int *arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndx = i;
        //find min
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minIndx])
            {
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
    printarr(arr,n);
    
}


int main(){
    int arr[] = {5,4,1,2,3};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr,n);
}