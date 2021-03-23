class Solution {
public:
    vector<int> partitionLabels(string S)
    {

        vector<int> ans={0};
        vector<int> result;
        int begin[26] = {0};
        int end[26]={0};
        int x = 0;
        int p,q =0;
        int m=(int)S[p]-97,n=(int)S[q]-97;
        for(int i=0;i<S.length();i++)
        {
            end[(int)S[i]-97] = i;
        }
        for(int i=S.length()-1;i>=0;i--)
        {
            begin[(int)S[i]-97] = i;
        }
        for(int i=0;i<26;i++)
        {
            cout << end[i] << " ";
        }
        cout << endl;
        for(int i=0;i<26;i++)
        {
            cout << begin[i] << " ";
        }
        cout << endl;

        int s = 0;
        int e = 0;
        for(int i=0;i<S.length();i++)
        {
            e = max(e,end[(int)S[i]-97]);
            if(e == i)
            {
                result.push_back(e-s+1);
                s = e+1;
            }
        }

//         for(int i=0;i<S.length();i++)
//         {
//             if(end[m]>=begin[n])
//             {
//                 q++;
//                 n=(int)S[q]-97;
//             }
//             if(end[n] >= end[m])
//             {
//                 m = n;
//             }
//             else{
//                 cout << end[m] << " ";
//                 ans.push_back(end[m]+1-x);
//                 x = end[m]+1;
//             }

//         }
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(ans[i]!=0)
        //     {
        //         result.push_back(ans[i]);
        //     }
        // }

        return result;

    }
};//
// Created by Daksh on 23-03-2021.
//

