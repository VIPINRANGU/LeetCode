class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> soln(n + 1, 0);
        for (int k = 1; k <= n; k++) {
            soln[k] = soln[k >> 1] + (k & 1);
        }
        return soln;
    }
};

