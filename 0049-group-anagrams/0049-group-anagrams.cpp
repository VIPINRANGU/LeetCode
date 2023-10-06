class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string,vector<string>> h_map;
        for(auto i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            h_map[temp].push_back(i);
        }
        vector <vector<string>> res;
        for (auto i : h_map){
            res.push_back(i.second);
        }
        return res;
    }
};