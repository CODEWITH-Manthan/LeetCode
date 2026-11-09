class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes=0;
        int count=0;

        for(int i : nums){
            if(count==0){
                votes=i;
            }
            if(votes==i){
                count++;
            }
            else{
                count--;
            }
        }
        return votes;
    }
};