class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        // int n = nums.size();
        vector<int> ans;
        vector<int>a(nums.size());
        int c =0 ;

        for(int i=0;i<nums.size();i++)
        {
            c = nums[i] - 1;
            a[c] = 1;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(a[i]==0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;

    }
};//
// Created by Daksh on 24-03-2021.
//

