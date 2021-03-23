class Solution
{
public:


    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> output;
        int n = nums.size();
        int left[n];
        int right[n];
        left[0] = 1;
        right[0] = 1;

        for(int i=1;i<nums.size();i++)
        {
            left[i] = left[i-1]*nums[i-1] ;
            cout << left[i] << " ";

            right[i] = right[i-1]*nums[n-i];
            cout << right[i] << " ";
        }

        cout << endl;


        for(int i=0;i<nums.size();i++)
        {
            output.push_back(left[i]*right[n-i-1]);
            cout << output[i] << " ";


        }



        return output;


    }
};//
// Created by Daksh on 23-03-2021.
//

