class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size() - 1;
        while (n > 1) {
            string r;
            for (int i = 0; i < n; i++) {
                int d1 = s[i] - '0';
                int d2 = s[i + 1] - '0';
                char d = (char)((d1 + d2) % 10 + '0');
                r.push_back(d);
            }
            n--;
            s = r;
        }
        return s[0] == s[1];
    }
};
