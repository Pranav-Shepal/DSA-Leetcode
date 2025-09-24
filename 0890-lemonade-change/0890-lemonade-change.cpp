class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int money=0;
        
        int Five=0;
        int Ten=0;
        int Twenty=0;
        for(int i=0;i<n;i++){
            int cash= bills[i];
            if(cash==5) Five++;
            else if(cash==10){
                if(Five==0) return false;
                Ten++;
                Five--;
            }
            else {
                if(Ten>=1 && Five>=1){
                    Ten--;Five--;
                }
                else if(Five>=3){
                    Five-=3;
                }
                else return false;
                Twenty++;
            }
        }

        return true;
    }
};