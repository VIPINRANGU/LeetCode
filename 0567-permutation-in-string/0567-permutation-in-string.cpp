class Solution {
private:
    bool permu(vector <int>& cnt) {
        for (int i = 0; i < 26; i++) {
            if (cnt[i] != 0) {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int s1siz = s1.size();
        int s2siz = s2.size();
        if (s1siz > s2siz) {
            return false;
        }
        
        vector<int> cnt(26);
        for (int i = 0; i < s1siz; i++) {
            cnt[s1[i] - 'a']++;
            cnt[s2[i] - 'a']--;
        }
        if (permu(cnt)) {
            return true;
        }
        
        for (int i = s1siz; i < s2siz; i++) {
            cnt[s2[i] - 'a']--;
            cnt[s2[i - s1siz] - 'a']++;
            if (permu(cnt)) {
                return true;
            }
        }
        return false;
    }
};