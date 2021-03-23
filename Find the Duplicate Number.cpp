class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        map <int,int> m;
        int ans=0,a;
        for(int i=0;i<nums.size();i++)
        {
            a = nums[i];
            m[a]++;
            //cout << m[a] << " ";
            if(m[a] == 2)
            {
                ans = i;
            }
        }


        return nums[ans];


    }
};//
// Created by Daksh on 23-03-2021.
//

