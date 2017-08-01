class Solution {
public:
	int countPrimes(int n) {
		vector<bool> prime(n, true);

		prime[0] = false;
		prime[1] = false;

		for (int i = 0; i < sqrt(n); ++i) {
			if (prime[i]) {
				for (int j = i*i; j < n; j += i) {
					prime[j] = false;
				}    
			}    
		}

		return count(prime.begin(), prime.end(), true);
		
    	//////////////////// TLE ////////////////////
    	// set<int> res;

    	// for (int i = 2; i < n; ++i) {
    	// 	res.insert(i);
    	// }

    	// for (int i = 0; i < sqrt(n); ++i) {
    	// 	if (res.find(i) != res.end()) {
    	// 		for (int j = i*i; j < n; j += i) {
    	// 			res.erase(j);
    	// 		}
    	// 	}
    	// }

    	// return res.size();
    	//////////////////// TLE ////////////////////
	}
};
