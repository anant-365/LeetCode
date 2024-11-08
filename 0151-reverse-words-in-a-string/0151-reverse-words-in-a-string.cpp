class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;
        s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
        s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
        s += ' ';   
        while (j <= n) {
            if (s[j] == ' ' || j == n) {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
            j++;
        }
        s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
        reverse(s.begin(), s.end());
        int slow = 0;  
        for (int fast = 0; fast < s.size(); fast++) {
            if (s[fast] != ' ' || (fast > 0 && s[fast - 1] != ' ')) {
                s[slow++] = s[fast];  
            }
        }
        s.resize(slow);
        
        return s;
    }
};
