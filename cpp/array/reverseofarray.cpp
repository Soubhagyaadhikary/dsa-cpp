#include<iostream>
using namespace std;
int printarr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    
}


// without extra space

// int main(){
//     int arr[] = {2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     int start = 0, end = n-1;
//     while (start < end)
//     {
//         //swap
//         // int temp = arr[start];
//         // arr[start] = arr[end];
//         // arr[end] = temp;

//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
    
//     printarr(arr, n);
// }



//with extra space
int main(){
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int coppyarr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n-i-1;
        coppyarr[i] = arr[j];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = coppyarr[i];
    }
    
    printarr(arr, n);
}