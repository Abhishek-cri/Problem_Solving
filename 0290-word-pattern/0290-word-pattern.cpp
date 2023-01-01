class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
        unordered_map<char, int >mp1;
        unordered_map<char, string>mp3;
        // unordered_map<string, int>mp2;
         vector<string>vec2;

        
        for(int i=0;i<s.size();i++)
        {
             string temp="";
           
               
                while(i<s.size() && s[i]!=' ')
                {
                   
                   temp+=s[i];
                    i++;
                } 
                vec2.push_back(temp);
                
           
           
        }
        
   
        
        
        vector<char>vec1;
       
        
        for(auto &it:mp1)
        {
            vec1.push_back(it.first);
        }
      
        
        for(int i=0;i<pattern.size();i++)
        {
            cout<<pattern[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<vec2.size();i++)
        {
            cout<<vec2[i]<<" ";
        }
        
        
        if(pattern.size()!=vec2.size())
        {
            return false;
        }
        
        
        
       
        set<string>st;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(mp3.find(pattern[i])==mp3.end() && st.find(vec2[i])==st.end())
            {
                mp3[pattern[i]]=vec2[i];
                st.insert(vec2[i]);
            }
            else
            {
                 if(mp3[pattern[i]]!=vec2[i])
                 {
                     return false;
                 }
            }
        }
        
    return true;
    }
};