class Solution {
public:
    bool canSortArray(vector<int>& v) {
        int size = v.size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - 1; j++) {
                int current = v[j];
                int bitCount1 = 0;
                while (current > 0) {
                    current = (current & (current - 1));
                    bitCount1++;
                }
                
                current = v[j + 1];
                int bitCount2 = 0;
                while (current > 0) {
                    current = (current & (current - 1));
                    bitCount2++;
                }
                
                if (bitCount1 == bitCount2 && v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }

        for (int i = 1; i < size; i++) {
            if (v[i] < v[i - 1])
                return false;
        }

        return true;
    }
};
