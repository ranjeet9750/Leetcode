class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum = prices[0];
        int largest = 0;
        for(int i = 0 ; i < prices.size(); i++){
            int result = prices[i]-minimum;
            if(result<0)
                minimum = prices[i];
            largest = max(result,largest);
        }
        return largest;
    }
};