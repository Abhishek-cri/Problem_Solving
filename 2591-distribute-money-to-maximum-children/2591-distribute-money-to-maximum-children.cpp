class Solution {
public:
    int distMoney(int money, int children) {
        
        int ans=0;
        if(children>money)  return -1;
        
        if(money>children*8)  return children-1;
        
        
        while(money>0 && money-8>=children-1)
        {
            ans+=1;
            money-=8;
            children--;
        }
        
        if(money==4 && children==1)  return ans-1;
        
        return ans;
        
    }
};