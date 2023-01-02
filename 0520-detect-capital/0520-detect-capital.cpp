class Solution {
public:
    
    bool is_cap(string word)
    {
       
        
        for(int i=0;i<word.size();i++)
        {
            if((word[i]-'A')>25 || (word[i]-'A')<0)
            {
                return false;
                
            }
        }
        
        return true;
    }
    
    
    bool is_sma(string word)
    {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]-'a'>25 || word[i]-'a'<0)
            {
                return false;
            }
            
        }
        return true;
    }
    
    bool is_onecap(string word)
    {
        int flag=0;
        
        for(int i=1;i<word.size();i++)
        {
               if((word[i]-'a')>25 || (word[i]-'a')<0)
            {
                flag=1;
                break;
            }
        }
    
        if(flag==0 && (word[0]-'A')<=25 && (word[0]-'A')>=0)
        {
            return true;
        }
        return false;
    }
    
    bool detectCapitalUse(string word) {
        
        
        // cout<<word[2]-'A';
        // return true;
        
        if(is_cap(word))
        {
            return true;
        }
        else if(is_sma(word))
        {
            return true;
        }
       else if(is_onecap(word))
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};