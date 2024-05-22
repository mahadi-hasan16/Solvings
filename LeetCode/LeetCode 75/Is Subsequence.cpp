class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans=false;
        int i=0,j=0;
        for(;i<t.size();i++)
        {
            if(t[i]==s[j])
            {
                j++;
            }
        }
        if(j==s.size())
        {
            ans=true;
        }    
        return ans;
    }
};
