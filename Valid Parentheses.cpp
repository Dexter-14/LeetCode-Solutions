class Solution {
public:
    bool isValid(string s)
    {
        stack <char> s1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(' || s[i]== '[' || s[i] == '{')
            {
                s1.push(s[i]);
            }
            else
            {
                if(s1.empty())
                    return false;
                else if(s1.top() == '[' && s[i]!=']')
                {
                    return false;
                }
                else if(s1.top() == '{' && s[i]!='}')
                {
                    return false;
                }
                else if(s1.top() == '(' && s[i]!=')')
                {
                    return false;
                }
                else
                    s1.pop();
            }
        }

        if(s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};//
// Created by Daksh on 24-03-2021.
//

