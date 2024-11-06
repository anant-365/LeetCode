class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int maxRow = 0;
            for (int i = 1; i < m; ++i) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }
            bool isPeak = true;
            if (mid > 0 && mat[maxRow][mid] < mat[maxRow][mid - 1]) {
                isPeak = false;
                right = mid - 1;
            } else if (mid < n - 1 && mat[maxRow][mid] < mat[maxRow][mid + 1]) {
                isPeak = false;
                left = mid + 1;
            }
            if (isPeak) {
                return {maxRow, mid};
            }
        }    
        return {};
    }
};
