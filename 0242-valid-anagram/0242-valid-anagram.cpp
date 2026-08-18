class Solution {
public:
    vector<int> count_freq(const string& s) {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        return freq;
    }

    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        return count_freq(s) == count_freq(t);
    }
};