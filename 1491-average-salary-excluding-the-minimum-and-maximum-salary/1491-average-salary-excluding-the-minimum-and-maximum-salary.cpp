class Solution {
public:
    double average(vector<int>& salary) {
        double mini=INT_MAX,maxi=INT_MIN,sum;
        for(auto i : salary){
            sum+=i;
            mini=min(mini,double(i));
            maxi=max(maxi,double(i));
        }
        int n=salary.size()-2;
        sum=sum-mini-maxi;
        return sum/n;
    }
};