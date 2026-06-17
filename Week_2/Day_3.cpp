//Leetcode problems IMPLEMENT STRSTR(), IS SUBSEQUENCE, REPEATED SUBSTRING PATTERN

class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=haystack.find(needle);
        if(pos==string::npos)
            return -1;
        return pos;
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        if(i==s.size())
            return true;
        return false;
    }
};

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {

            if (n % len != 0)
                continue;

            string pattern = s.substr(0, len);
            string temp = "";

            int times = n / len;

            for (int i = 0; i < times; i++) {
                temp += pattern;
            }

            if (temp == s)
                return true;
        }

        return false;
    }
};