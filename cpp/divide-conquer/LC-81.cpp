
#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int si, int ei, int target) {
    if (si > ei) {
        return false;
    }

    int mid = si + (ei - si) / 2;

    if (nums[mid] == target) {
        return true;
    }

    // Handle duplicates
    if (nums[si] == nums[mid] && nums[mid] == nums[ei]) {
        return search(nums, si + 1, ei - 1, target);
    }

    // Left half is sorted
    if (nums[si] <= nums[mid]) {
        if (nums[si] <= target && target < nums[mid]) {
            return search(nums, si, mid - 1, target);
        } else {
            return search(nums, mid + 1, ei, target);
        }
    }
    // Right half is sorted
    else {
        if (nums[mid] < target && target <= nums[ei]) {
            return search(nums, mid + 1, ei, target);
        } else {
            return search(nums, si, mid - 1, target);
        }
    }
}

//best 
 bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid]==target){
                return true;
            }

            if (nums[low]== nums[mid] && nums[mid] == nums[high])
            {
                low++ , high--;
                continue;
            }

            if (nums[low] <= nums[mid]) //L1        
            {
              if (nums[low]<= target && target<= nums[mid]) //left
              {
               high = mid-1;
              }else{ //right
                    low = mid +1;
              }
              
            }else{//L2
                if (nums[mid]<= target && target<= nums[high]){ 
                        low = mid +1;
                }else{
                    high = mid -1;
                }
            }
            
            
        }
        return false;
    }

int main() {
    vector<int> nums = {4, 5, 6, 6, 7, 7,0, 0, 1, 2};
    int target = 0;

    
    cout << "Found: "
         << search(nums,  target)
         << endl;

    return 0;
}
