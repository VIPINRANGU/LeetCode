class Solution {
public:
    int long long e=0,o=0;
    int minCostToMoveChips(vector<int>& position) {
        for(int j=0;j<position.size();j++){
            int i=position[j];
            if(i%2==0){
                e++;
            }
            else{o++;
            }
        }
        if(e>o){
            return o;
        }
        else{
            return e;
        }
    }
};