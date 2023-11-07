class Solution {
public:
    double average(vector<int>& salary) {
        double mini=INT_MAX,maxi=INT_MIN,sum;
        int n=salary.size();
        for(int i=0;i<n;i++){
            sum+=salary[i];
            mini=min(mini,double(salary[i]));
            maxi=max(maxi,double(salary[i]));
        }
        n=n-2;
        sum=sum-mini-maxi;
        return sum/n;
    }
};