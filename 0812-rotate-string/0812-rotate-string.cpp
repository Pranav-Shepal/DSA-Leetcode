class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        if(n!=goal.length())return false;
        string t=goal+goal;

        size_t pos=t.find(s);

        if(pos!=string::npos) return true;
        return false;

    }
};