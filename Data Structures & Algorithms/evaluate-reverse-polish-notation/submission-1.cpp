class Solution {
public:
    bool isnum(string s){
        if(s.length()==1){
            return isdigit(s[0]);
        }
        for(int i =1;i<s.length();i++){
            if(!isdigit(s[i]))return false;
        }return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(isnum(c)){
                st.push(stoi(c));
            }
            else{
                int b=st.top();st.pop();
                int a=st.top();st.pop();
                if(c=="+"){
                    st.push(a+b);
                }
                else if(c=="-"){
                    st.push(a-b);
                }
                else if(c=="*"){
                    st.push(a*b);
                }
                else{
                    if(b==0)
                        st.push(0);
                    else
                        st.push(a/b);
                }
            }
        }
        return st.top();
    }
};
