class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX,min2=INT_MAX;
        for(auto x:prices)
        {
            if(x<min1)
                min2=exchange(min1,x);
            else
                min2=min(min2,x);
        }
        int left=money-min1-min2;
        return (left>=0)?left:money;
    }
};
