//Leetcode problems MOVE ZEROES, SQUARE OF A SORTED ARRAY, CONTAINER WITH MOST WATER

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int k=nums.size();
        
        for(int j=0;j<k;j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }

        }
    }
};


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int i=0;
    int k=nums.size();
    vector<int> ans(k);
    int j=k-1,m=k-1;
    while(i<=j)
    {
        if(abs(nums[i])>abs(nums[j]))
        {
            ans[m--]=nums[i]*nums[i];
            i++;
        }
        else
        {
            ans[m--]=nums[j]*nums[j];
            j--;
        } 
    }
    return ans; 
    }
};


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,ans=0;
        int k=height.size();
        int j=k-1;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            int w=j-i;
            ans=max(ans,h*w);
            if(height[i]<=height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};