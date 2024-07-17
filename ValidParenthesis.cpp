class Solution {
     bool cmp(char a, char b)
    {
        if(a=='(' and b==')')
        return true;
        if(a=='{' and b=='}')
        return true;
        if(a=='[' and b==']')
        return true;  
        return false;
    }
public:
   
    bool isValid(string s) 
    {
       stack<char>st;
       for(int i=0 ; i<s.length() ; i++)
       {
         if(s[i]=='(' or s[i]=='{' or s[i]=='[')
         {
            st.push(s[i]);
         }
         else if(s[i]==')' or s[i]==']' or s[i]=='}')
         {
            if(!st.empty() and cmp(st.top(),s[i]))
            {
                st.pop();
            }
            else
            {
                return false;
            }
         }
       }    
       if(st.empty())
       return true;
       return false;
    }
};