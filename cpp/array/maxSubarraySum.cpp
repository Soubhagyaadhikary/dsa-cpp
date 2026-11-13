#include<iostream>
#include<climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT_MIN;
for (int start = 0; start < n; start++)
{
  for (int end = start; end < n; end++)
  {
      int currSum = 0;
    for (int i = start; i <= end; i++)
    {
        currSum+= arr[i];
    }
    cout << currSum <<",";
    maxSum = max(maxSum, currSum);
  }
  cout << endl;
}
cout<< "max subarray sum is : " << maxSum << endl;
}



//TC  optimized
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;

for (int start = 0; start < n; start++)//start = 2
{
    int currSum = 0;
  for (int end = start; end < n; end++)// end = 2,3,4,5
  {
    currSum+= arr[end];
    maxSum = max(maxSum, currSum);
  }
  
}
cout<< "max subarray sum is : " << maxSum << endl;
}



//kadane's algorithm(DP)
void maxSubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        
    }
   cout<< "max subarray sum is : " << maxSum << endl;
    
}


int main(){
    int arr[6] = {-2,-3,6,-5,-4,-2};
    int n = 6;
    maxSubarraySum3(arr,n);
}