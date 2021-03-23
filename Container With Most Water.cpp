class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int left,right,n=height.size();
        left = height[0];
        right = height[n-1];
        int r=1,l=1;
        int ans = 0;

        int arr[n];
        for(int i =0;i<n-1;i++)
        {

            if(left>right)
            {
                arr[i] = right*((n-r)-l+1);
                if(arr[i]>ans)
                    ans = arr[i];
                right = height[n-1-r];
                r++;
            }
            else{
                arr[i] = left*((n-r)-l+1);
                if(arr[i]>ans)
                    ans = arr[i];
                left = height[l];
                l++;
            }
            cout << arr[i] << " ";
        }
        return ans;

    }
};//
// Created by Daksh on 23-03-2021.
//

