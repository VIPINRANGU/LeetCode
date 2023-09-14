class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map <string,int> cnt;
        for(auto i: arr){
            cnt[i]++;
        }
        int c=0;
        for(auto i : arr){
            if(cnt[i]==1){
                c++;
            }
            if(k==c){
                return i;
            }
        }
            return "";
    }
};