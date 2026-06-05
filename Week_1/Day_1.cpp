//Leetcode problems TWO SUM, REMOVE DUPLICATES FROM SORTED ARRAY, BEST TIME TO BUY AND SELL STOCK



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<pair<int,int>> arr;
        int i;
        for(i=0; i<nums.size();i++)
            arr.push_back({nums[i], i});
        sort(arr.begin(),arr.end());
        int k=nums.size();
        int j=k-1;
        i=0;
        while(i<j)
        {
            int sum = arr[i].first + arr[j].first;
            if(sum==target)
                return{arr[i].second,arr[j].second};
            else if(sum>target)
                j--;
            else
                i++;
        }
        return{};
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        if(k == 0) 
            return 0;

        vector<int> arr;
        arr.push_back(nums[0]);

    for(int i = 1; i < k; i++) {
        if(nums[i] != nums[i-1])
            arr.push_back(nums[i]);
    }   

    for(int i = 0; i < arr.size(); i++)
    nums[i] = arr[i];

    return arr.size();

    }
};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprofit=INT_MAX;
        int maxprofit=0;
        for(int x:prices)
        {
            minprofit=min(minprofit,x);
            maxprofit=max(maxprofit,x-minprofit);
        }
        return maxprofit;
    }
};