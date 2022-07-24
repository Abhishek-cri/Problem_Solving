class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++)
        {
            q.push(stones[i]);
        }
        
      
        int n=q.size();
    
        int x,y;
        while(n>1)
        {
            y=q.top();
            q.pop();
            x=q.top();
            q.pop();
            n-=2;
            
          if(y-x>0)
          {
            q.push(y-x);
            n+=1;
          }
        }
     
        if(!q.empty())
        {
            return q.top();
        }
        return 0;
         
    }
};