//  Leetcode problems valid anargam, first unique character in a string, ransom note

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;
        for(int i=0;i<s.length();i++)
        {
            int pos=t.find(s[i]);
            if(pos==string::npos)
                return false;
            t.erase(pos,1);
        }
        return true;
    }
};

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for(char ch:s)
            freq[ch-'a']++;
        for(int i=0;i<s.length();i++)
        {
            if(freq[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);
        for(char ch1:magazine)
            freq[ch1-'a']++;
        for(char ch2:ransomNote)
        {
            if(freq[ch2-'a']==0)
                return false;
            else
                freq[ch2-'a']--;
        }
        return true;
    }
};