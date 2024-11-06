class Solution {
public:
        bool canMakeBouquets(const vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }

            if (bouquets >= m) return true;
        }

        return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long requiredFlowers = (long long)m * k;
        if (bloomDay.size() < requiredFlowers) return -1;
        
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};