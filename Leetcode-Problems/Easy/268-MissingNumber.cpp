class Solution {
public: //Using XOR
    int missingNumber(vector<int>& nums) {
        int missing=nums.size();
          for(int i=0;i<nums.size();i++){
            missing^=(i^nums[i]);
          
          }
        return missing;
    }
};