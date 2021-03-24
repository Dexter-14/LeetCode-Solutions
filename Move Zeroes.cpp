class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int n = nums.size();
        //cout << n;
        int a[n];
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                a[n-j-1] = 0;
                j++;
            }
            else{
                a[i-j] = nums[i];
            }

        }
        for(int i=0;i<n;i++)
        {
            nums[i] = a[i];
            cout << a[i] << " ";
        }

        // nums = a;
        //return a;


    }
};//
// Created by Daksh on 24-03-2021.
//

