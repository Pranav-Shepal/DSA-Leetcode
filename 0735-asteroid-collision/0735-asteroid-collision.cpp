class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();

        stack<int>st;
        st.push(ast[0]);
        bool destroy;

        for(int i=1;i<n;i++){
            int a=ast[i];
            destroy=false;

            while(st.size()>0 && st.top()>0 && a<0){
                if(abs(st.top())<abs(a)){
                    st.pop();
                    continue;
                }
                else if(abs(st.top())==abs(a)) st.pop();
                destroy=true;
                break;
            }
            if(!destroy)st.push(a);
        }

        vector<int>ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};