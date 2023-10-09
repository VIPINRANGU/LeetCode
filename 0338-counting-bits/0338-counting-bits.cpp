class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> sol(n+1);int m=0;
        for(int i=0;i<=n;i++){
            m=i;int l=0;
            while((m>>l)>0){
                sol[i]+=(m>>l)&1;
                l++;
            }
        }
        return sol;
    }
};