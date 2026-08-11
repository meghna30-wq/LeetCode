class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string doubled = s + s;
        int j = 0; 
        for (int i = 0; i < doubled.length(); i++) {
            if (doubled[i] == goal[j]) {
                j++;
                if (j == goal.length()) {
                    return true;
                }
            } else {
                i -= j;
                j = 0;
            }
        }

        return false;
    }
};