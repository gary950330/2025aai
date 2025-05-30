// week12-5.cpp
// LeetCode 1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N); //c++
        // 題目說 for迴圈,對所有的i
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};
