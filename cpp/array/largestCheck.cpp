#include<iostream>
using namespace std;
int main(){

int arr[] = {2,3,7,9,12};
int n = sizeof(arr)/ sizeof(int);

int max = arr[0];
int min = arr[0];
for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
    if (min > arr[i])
    {
        min = arr[i];
    }
    
}
cout << "max is " << max << endl;
cout << "min is " << min;


    return 0;
}