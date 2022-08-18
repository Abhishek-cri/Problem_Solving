class Solution {
public:
    bool isPalindrome(string s) {
        
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     string s1;
        
  for(int i=0;i<s.size();i++)
  {
  
      if((s[i]+0>=97 && s[i]+0<=122) || (s[i]-0>=48 && s[i]-0<=57))
      {
          s1.push_back(s[i]);
      }
  }
   
       // cout<<s1.size();
        for(int i=0;i<s1.size();i++)
        {
             
            cout<<s1[i];
        }
       
        int low=0;
        int high=s1.size()-1;

        
        while(low<=high)
        {
           if(s1[low]==s1[high])
           {
               low++;
               high--;
           }
            else
            {
                return false;
            }
        }
        
        
        
        return true;
        
    }
    
};