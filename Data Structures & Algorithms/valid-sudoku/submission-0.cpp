class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0;i<9;i++){
            unordered_set<char>st;
            for(int j =0;j<9;j++){
                if(board[i][j]!='.'){
                    if(st.count(board[i][j])){cout<<'1';
                        return false;}
                    st.insert(board[i][j]);
                }
            }
        }
        for(int i =0;i<9;i++){
            unordered_set<char>st;
            for(int j =0;j<9;j++){
                if(board[j][i]!='.'){
                    if(st.count(board[j][i])){cout<<2;
                        return false;}
                    st.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_set<char>st;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                    if(board[k][l]!='.'){
                        if(st.count(board[k][l]))
                            return false;
                        st.insert(board[k][l]);
                        }
                    }       
                }
            }
        }
        return true;
    }
};
