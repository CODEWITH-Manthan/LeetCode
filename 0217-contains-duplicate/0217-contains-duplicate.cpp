class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        for(int right = 1; right <nums.size() ; right++){
            if(nums[left]==nums[right]){
                return true;
            }
            left++;
        }
        return false;
    }
};