class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	int len = static_cast<int>(prices.size());
    	int res = 0;

    	for (int i = 1; i < len; ++i) {
    		res += max(prices[i] - prices[i - 1], 0);
    	}
        
        return res;
    }
};
