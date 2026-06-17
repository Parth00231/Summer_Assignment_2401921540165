//Leetcode problems REVERSE WORDS IN A STRING, DECODE STRING, GENERATE PARENTHESES

class Solution {
public:
    string reverseWords(string s) 
    {
        int i=0,a=0;
        int k=s.length();
        for(i;i<=k;i++)
        {
            if(i==k || s[i]==' ')
            {
                reverse(s.begin()+a,s.begin()+i);
                a=i+1;
            }
        }
        return s;    
    }
};

//Prob - 394 Not done yet (Decode string)

class Solution {
public:
    vector<string> ans;

    void solve(int open, int close, int n, string curr) {

        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }
        if (open < n) {
            solve(open + 1, close, n, curr + '(');
        }
        if (close < open) {
            solve(open, close + 1, n, curr + ')');
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(0, 0, n, "");
        return ans;
    }
};