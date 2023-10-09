class Solution {
public:
    int getSum(int sol, int sec) {
        while (sec != 0) {
            int left = sol & sec;sol = sol ^ sec;
            sec =(unsigned)left << 1;
        }
        return sol;
    }
};