class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        if(n<3)return "";

        vector<string>v;
        for(int i=0;i<10;i++){
            string c=to_string(i);
            string str=c+c+c;
            v.push_back(str);
        }
        for(int i=9;i>=0;i--){
            auto pos=num.find(v[i]);
            if(pos!=string::npos){
                return v[i];
            }
        }
        return "";
    }
};