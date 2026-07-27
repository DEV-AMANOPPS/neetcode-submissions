class Solution {
public:
bool solve(int i ,int j,vector<vector<char>>& board, string &word,int idx){
    if(idx==word.size()) return true; //matlb pura traverse kar liya hai word ko

    if(i<0||j<0|| i>=board.size()||j>=board[0].size()) return false;
    if(board[i][j]!=word[idx]) return false;

   char ch= board[i][j];
   board[i][j]='#';

   bool down = solve(i+1,j,board,word,idx+1);
   bool up = solve(i-1,j,board,word,idx+1);
   bool right = solve (i,j+1,board,word,idx+1);
   bool left = solve (i,j-1,board,word,idx+1);

   board[i][j]= ch;
   return down|| up|| right||left;

}
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i =0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]==word[0] && solve(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};
