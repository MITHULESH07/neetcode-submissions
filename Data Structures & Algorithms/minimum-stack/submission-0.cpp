class MinStack {
public:
    vector<int>st;
    map<int,int>mp;
    MinStack(){
        st.resize(0);
    }
    
    void push(int val) {
        st.push_back(val);
        mp[val]++;
    }
    
    void pop() {
        mp[st[st.size()-1]]--;
        if(mp[st[st.size()-1]]<0)mp[st[st.size()-1]]=0;
        st.pop_back();
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        for(auto m:mp){
            if(m.second>0)
                return m.first;
        }
    }
};
