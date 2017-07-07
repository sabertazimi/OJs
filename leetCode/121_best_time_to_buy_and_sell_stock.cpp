class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	int len = static_cast<int>(prices.size());

    	if (len <= 1) {
    		return 0;
    	}

    	int res = 0;
    	int minn = INT_MAX;

    	for (int i = 0; i < len; ++i) {
    		minn = min(minn, prices[i]);
    		res = max(res, prices[i] - minn);
    	}
        
        return res;
    }
};
