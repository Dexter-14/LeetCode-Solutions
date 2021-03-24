class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int min = 1000000;
        int max = 0;
        int profit = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min = prices[i];
            }
            else if(prices[i] - min > profit)
            {
                profit = prices[i] - min;

            }

        }


        return profit;

    }
};//
// Created by Daksh on 24-03-2021.
//

