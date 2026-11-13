#include<iostream>
#include<string>
using namespace std;

int binSearch(int arr[],int st,int end, int key){
   if (st>end)
   {
    return  -1;
   }
   

    int mid = (st+end) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }else if (arr[mid] > key)
    {
        binSearch(arr,st,mid-1, key);
    }else{
        binSearch(arr,mid+1,end, key);

    }
    
    
}

int main(){
int arr[] = {1,2,4,5,8,9,10};
cout<<binSearch(arr,0,6,4)<<endl;
    return 0;
}