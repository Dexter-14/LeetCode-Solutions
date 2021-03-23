class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int me = nums[0];
        int c =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == me)
            {
                c++;
            }
            if(nums[i] != me)
            {
                c--;
            }
            if(c <0)
            {
                me = nums[i];
                c = 1;
            }
        }
        return me;

    }
};//
// Created by Daksh on 23-03-2021.
//

