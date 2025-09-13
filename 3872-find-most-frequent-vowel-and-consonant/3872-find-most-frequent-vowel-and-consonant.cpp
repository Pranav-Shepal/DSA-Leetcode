class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.length();

        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int vf=0;
        int cf=0;

        for(auto ele:mp){
            char ch=ele.first;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vf=max(vf,ele.second);
            }
            else cf=max(cf,ele.second);
        }

        return vf+cf;
    }
};