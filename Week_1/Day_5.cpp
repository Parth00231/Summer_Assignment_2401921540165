// Leetcode problems VALID PALINDROME, REVERSE STRING, LONGEST COMMON PREFIX

class Solution {
public:
    bool isPalindrome(string s) {
    int k=s.length();
    int ptr=k-1;
    int i=0;
    while(i<ptr)
    {
        if(!isalnum(s[i]))
            i++;
        else if(!isalnum(s[ptr]))
            ptr--;
        else if(tolower(s[i])!=tolower(s[ptr]))
            return false;
        else if(tolower(s[i])==tolower(s[ptr]))
        {
            ptr--;
            i++;
        }
    }
    return true;
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].find(prefix)!=0)
            {
                prefix.pop_back();
                if(prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};