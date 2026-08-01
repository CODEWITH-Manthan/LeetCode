class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= INT_MAX;
        int maxprofit= 0;

        for(int i=0 ; i< prices.size() ; i++){
            int price= prices[i];

        if( price < minprice){
            minprice= price;
        }
        else{
            maxprofit=max(maxprofit , price-minprice);
        }
        }
        return maxprofit;
    }
};