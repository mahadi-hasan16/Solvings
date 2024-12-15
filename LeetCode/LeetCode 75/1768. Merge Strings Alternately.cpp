class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i, j;
        ans += word1[0];
        for(i = 1, j = 0; i<word1.size() or j<word2.size(); i++,j++)
        {
            if(j<word2.size())
            {
                ans += word2[j];
            }

            if(i<word1.size())
            {
                ans += word1[i];
            }
        }
        return ans;
    }
};
