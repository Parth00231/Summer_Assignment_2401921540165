// Leetcode problems MAXIMUM SUBARRAY, CONTAINS DUPLICATE, MAXIMUM AVERAGE SUBARRAY I

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
                sum=0;
        }
        return maxsum;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                return true;
        }
        return false;
    }
};


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,max_sum=INT_MIN;
        int length=nums.size();
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        max_sum=sum;
        for(int i=k;i<length;i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];
            max_sum=max(max_sum,sum);
        }
        double ans=(double)max_sum/k;
        return ans;
    }
};