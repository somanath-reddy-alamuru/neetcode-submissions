class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> rowmp[9];
        unordered_map<char,int> colmp[9];
        unordered_map<char,int> boxmp[9];

        int row;
        int col;
        int square;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                row=i;
                col=j;
                square=(i/3)*3+j/3;
                if(board[i][j]!= '.'){
                    if(rowmp[i][board[i][j]]>=1 || colmp[j][board[i][j]]>=1 || boxmp[square][board[i][j]]>=1  ){
                    return false;
                }
                }
                
                rowmp[i][board[i][j]]++;
                colmp[j][board[i][j]]++;
                boxmp[square][board[i][j]]++;
            }
        }
        return true;
    }
};
