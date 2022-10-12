class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9), col(9), box(9);
        for(int i=0; i< board.size(); i++)
        {
            for(int j=0; j<board[i].size(); j++)
            {
                if(board[i][j]=='.') continue;
                char ch = board[i][j];
                 if(row[i].count(ch) or col[j].count(ch) or box[(i/3)*3 + j/3].count(ch) ) return false;
                row[i].insert(ch);
                col[j].insert(ch);
                box[(i/3)*3 + j/3].insert(ch);
            }
        }
        return true;
    }
};