class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        int ans = 0, n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i+=2) ans += nums[i];
        return ans;
    }
};