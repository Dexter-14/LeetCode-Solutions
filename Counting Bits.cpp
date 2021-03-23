class Solution {
public:
    vector<int> countBits(int num)
    {

        vector<int> ans;
        ans.push_back(0);
        int x= 0;
        for(int i=1;i<=num;i++)
        {
            if(i%2==0)
            {
                x = ans[i/2];
                ans.push_back(x);
            }
            else
            {
                x = ans[i/2] + 1;
                ans.push_back(x);
            }
        }


        return ans;
    }
};//
// Created by Daksh on 23-03-2021.
//

