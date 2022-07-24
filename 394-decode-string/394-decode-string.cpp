class Solution {
public:
    string decodeString(string s) {
        
            stack<char> st;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] != ']')
                st.push(s[i]);
            else
            {
                string currString = "";
                
                while(st.top() != '[')
                {
                    currString = st.top() + currString;
                    //Or -> currString += st.top(); and then reverse currString after while loop.
                    st.pop();
                }                
                st.pop(); // Removing '[' from the stack .
                
                string number = "";
                while(!st.empty() && isdigit(st.top()))
                {
                    number = st.top() + number;
                    //Or -> number += st.top(); and then reverse number after while loop.
                    st.pop();
                }
                
                int kTimes = stoi(number);
                
                while(kTimes--)
                {
                    for(int i=0;i<currString.length();i++)
                        st.push(currString[i]);
                }
            }
        }
        
        string ans = "";
        while(!st.empty())
        {
            ans = st.top() + ans;
            //Or -> s.push_back(st.top()); and then reverse answer after while loop.
            st.pop();
        }
        return ans;
    }
        
    
};