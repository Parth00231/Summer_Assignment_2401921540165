//Leetcode problems DIAGONAL SUM, RESHAPE THE MATRIX, SPIRAL MATRIX

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    sum+=mat[i][j];
                else if(i+j==m-1)
                    sum+=mat[i][j];
            }
        }
        return sum;
    }
};


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        int temp=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[temp/c][temp%c]=mat[i][j];                  //formula to convert 2D to 1D and vice versa (Remember this)
                temp++;
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowstart=0,colstart=0;
        int rowend=matrix.size()-1, colend=matrix[0].size()-1;
        vector<int>result;
        while(rowstart<=rowend && colstart<=colend)
        {
            for(int i=colstart;i<=colend;i++)
                result.push_back(matrix[rowstart][i]);
            rowstart=rowstart+1;
            
            for(int i=rowstart;i<=rowend;i++)
                result.push_back(matrix[i][colend]);
            colend=colend-1;

            if(rowstart<=rowend)
            {
                for(int i=colend;i>=colstart;i--)
                    result.push_back(matrix[rowend][i]);
            }
            rowend=rowend-1;
            if(colstart<=colend)
            {
                for(int i=rowend;i>=rowstart;i--)
                    result.push_back(matrix[i][colstart]);
            }
            colstart=colstart+1;
        }
        return result;
    }
};