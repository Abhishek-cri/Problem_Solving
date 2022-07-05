class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        
        int len=ransomNote.length();
        int j=0;
        bool check=false;
        for(int i=0;magazine[i]!='\0';i++)
        {
            
            if(magazine[i]==ransomNote[j])
            {
                j++;
                len--;
            }
            if(len==0)
            {
                check=true;
                break;
            }
        }
        
        return check;
        
    }
};