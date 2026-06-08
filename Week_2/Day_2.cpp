//Leetcode problems LENGTH OF LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS, PERMUTATION IN STRING, FIND ALL ANAGRAMS IN A STRING

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();

        if (n > m) return false;

        vector<int> cnt1(26, 0), cnt2(26, 0);

        for (int i = 0; i < n; i++) {
            cnt1[s1[i] - 'a']++;
            cnt2[s2[i] - 'a']++;
        }

        if (cnt1 == cnt2) return true;

        for (int i = n; i < m; i++) {
            cnt2[s2[i] - 'a']++;          
            cnt2[s2[i - n] - 'a']--;     

            if (cnt1 == cnt2)
                return true;
        }

        return false;
    }
};

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> ans;

        if (m > n) return ans;

        vector<int> cntP(26, 0), cntS(26, 0);

        for (int i = 0; i < m; i++) {
            cntP[p[i] - 'a']++;
            cntS[s[i] - 'a']++;
        }

        if (cntP == cntS)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            cntS[s[i] - 'a']++;      // add new char
            cntS[s[i - m] - 'a']--;  // remove old char

            if (cntP == cntS)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};