class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int count1 = 0;
        int left = 0;
        string result = "";

        for (int right = 0; right < n; ++right) {
            if (s[right] == '1') {
                count1++;
            }

           
            while (count1 == k) {
               
                if (s[left] == '1') {
                    string current = s.substr(left, right - left + 1);
                    if (result.empty() || current.length() < result.length() || 
                       (current.length() == result.length() && current < result)) {
                        result = current;
                    }
                    count1--;
                }
                left++;
            }
        }

        return result;
    }
};