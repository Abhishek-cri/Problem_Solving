class Solution {
public:
    
static bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;
}
    
    
    
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        
        
      unordered_map<string, int>mp;
           
        unordered_map<string, int>mp2;
      
       
   for(auto &it:positive_feedback)
   {
       mp[it]++;
   }
        
  for(auto &it:negative_feedback)
   {
       mp2[it]++;
   }
       
       
        
      
        
        
        
        unordered_map<int, int>mp3;
        for(int i=0;i<report.size();i++)
        {
           string s;
           s=report[i];
        
            int count=0;
            
            for(int j=0;j<s.size();j++)
            {
                string temp="";
                int k=0;
                while(j<s.size() && s[j]!=' ')
                {
                    temp+=s[j];
                    j++;
                }
               
                if(mp.find(temp)!=mp.end())
                {
                    count+=3;
                   
                }
                 if(mp2.find(temp)!=mp2.end())
                {
                    count-=1;
                   
                }
                 mp3[student_id[i]]=count;
            }
        }
          vector<pair<int, int>>res;
     
       for(auto &it:mp3)
        {
            res.push_back({it.first, it.second});
        }
       
        sort(res.begin(), res.end(), cmp);
        // reverse(res.begin(), res.end());
        vector<int>ans;
       int j=0;
        // while(k)
        // {
        //     ans.push_back(res[j].first);
        //     j++;
        //     k--;
        // }
        
           for(int i=0;i<k;i++)
        {
            ans.push_back(res[i].first);
        }
        
        return ans;
        
    
        
    }
};