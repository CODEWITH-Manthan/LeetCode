class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes=0;
        int counter=0;

        for( int c : nums){
            if(counter==0){
            votes=c;
            }
            if(votes== c){
                counter++;
            }
            else{
                counter--;
            }
        }
        return votes;

    }
};