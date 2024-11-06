class Solution {
public:
        bool canShipWithinDays(vector<int>& weights, int days, int capacity) {
        int daysNeeded = 1, currentWeight = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (currentWeight + weights[i] > capacity) {
                daysNeeded++;
                currentWeight = 0;
            }
            currentWeight += weights[i];
            
            if (daysNeeded > days) {
                return false;
            }
        }
        
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (canShipWithinDays(weights, days, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};