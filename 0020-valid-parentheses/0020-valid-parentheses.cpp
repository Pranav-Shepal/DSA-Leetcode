class Solution {
public:

    bool isClosed(char c){
        if(c=='(' || c=='{' || c=='[') return true;
        return false;
    }

    bool isValid(string s) {
        int n=s.length();
        stack<char>st;

        for(int i=0;i<n;i++){
            if(isClosed(s[i])){
                st.push(s[i]);
            }
            else{
                if(st.size()==0)return false;
                char c=st.top();
                if(s[i]==')' && c!='(' || s[i]==']' && c!='[' || s[i]=='}' && c!='{') return false;
                st.pop();
            }
        }
        if(st.size()!=0)return false;
        return true;
    }
};