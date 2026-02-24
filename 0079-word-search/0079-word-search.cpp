class Solution {
public:

    bool backTrac(vector<vector<char>>& board,string word,int i,int j,int idx){
        if(idx==word.length()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()|| word[idx]!=board[i][j]) return false;

        char temp=board[i][j];
        board[i][j]='#';

        bool found=backTrac(board,word,i-1,j,idx+1) ||
                   backTrac(board,word,i+1,j,idx+1) || 
                   backTrac(board,word,i,j-1,idx+1) ||
                   backTrac(board,word,i,j+1,idx+1);
        board[i][j]=temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(backTrac(board,word,i,j,0)) return true;
            }
        }
        return false;
    }
};