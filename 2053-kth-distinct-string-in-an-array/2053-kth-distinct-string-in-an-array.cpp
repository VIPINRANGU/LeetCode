class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map <string,int> count;
        for(auto i: arr){
            count[i]++;
        }
        int cnt=0;
        for(auto x : arr){
            if(count[x]==1){
                cnt++;
            }
            if(k==cnt){
                return x;
            }
        }
            return "";
    }
};