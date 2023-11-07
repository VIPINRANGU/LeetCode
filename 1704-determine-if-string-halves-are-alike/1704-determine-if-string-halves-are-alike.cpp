class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0, j = (s.size()) / 2, lcnt = 0, rcnt = 0;
        set<char> myset = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while (i < (s.size() / 2)) {
            if (myset.find(s[i]) != myset.end()) {
                lcnt++;
            }
            if (myset.find(s[j]) != myset.end()) {
                rcnt++;
            }
            i++;j++;
        }
        return lcnt == rcnt;
    }
};
