class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int poi=0;poi<words.size();poi++){
            if(words[poi].substr(0,pref.length())==pref){
                count++;
            }
        }
        return count;
    }
};