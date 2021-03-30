class Solution {
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        int open=0 , close=0;
        string s = "";
        recur(ans,open,close,n,s);
        // for(int i=0;i=ans.size();i++)
        // {
        //     cout << ans[i] << " ";
        // }
        return ans;
    }

    void recur(vector<string> &ans ,int open, int close, int n, string s)
    {
        if(s.length() == 2*n)
        {
            ans.push_back(s);
            //return ans;
            //cout << s << endl;
        }

        if(open < n)
        {
            recur(ans,open+1,close,n,s+"(");
            // cout << s << endl;

        }

        if(close < open)
        {
            recur(ans,open,close+1,n,s+")");
            // cout << s << endl;
        }

    }
};//
// Created by Daksh on 30-03-2021.
//

