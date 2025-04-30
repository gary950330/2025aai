// week11-4.cpp
// LeetCode 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0; // 迴圈前面 ans 是 0
        for(int i=0; i<nums.size(); i++){
            int now = nums[i];
            //Q:
            int digits = 0; //有幾位數?
            while(now>0){
                digits++; // 一邊數一下 剝了幾次
                now = now / 10; //數字越剝越小
            }
            if(digits%2==0) ans++;//
        }
        return ans;
    }
};
