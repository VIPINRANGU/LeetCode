class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      vector<set<int>> rsets(9), csets(9), bsets(50);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                
                int curr = board[i][j] - '0';
                if (rsets[i].count(curr) || csets[j].count(curr) || bsets[(i/3)*5+j/3].count(curr)) 
                    return false;
                rsets[i].insert(curr);
                csets[j].insert(curr);
                bsets[(i/3)*5+j/3].insert(curr);
            }
        }
        return true;
   
    }
};