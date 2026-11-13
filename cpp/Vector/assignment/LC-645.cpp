#include<iostream>
#include<vector>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        vector<int> freq(n + 1, 0);

        // Count frequency
        for (int idx = 0; idx < n; idx++) {
            int val = nums[idx];
            freq[val]++;
        }

        int missing = 0, repeating = 0;

        // Find missing and repeating
        for (int idx = 1; idx <= n; idx++) {

            if (freq[idx] == 0)
                missing = idx;

            else if (freq[idx] > 1)
                repeating = idx;
        }

        return {repeating, missing};
    }
int main(){
 vector<int> nums = {1,2,2,4};

    

    vector<int> ans = findErrorNums(nums);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}