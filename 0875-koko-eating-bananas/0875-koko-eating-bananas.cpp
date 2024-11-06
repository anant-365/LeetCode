class Solution {
public:
int calculateTotalHours(vector<int>& piles, int speed) {
        long long totalHours = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            totalHours += (piles[i] + speed - 1) / speed;
            if (totalHours > 1000000000) {
                return totalHours;
            }
        }
        return totalHours;
    }

int minEatingSpeed(vector<int>& piles, int h) {
         int low = 1, high = *max_element(piles.begin(), piles.end());
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalHours = calculateTotalHours(piles, mid);
            
            if (totalHours <= h) {
                result = mid;  
                high = mid - 1;
            } else {
                low = mid + 1;  
            }
        }
        return result;
    }
};