class Solution {
public:
    string GenerateString(string s) {
        string generatedString = "";
        for (int i = 0; i < s.size(); i++) {
            generatedString += char(s[i] + 1);
        }
        return s + generatedString;
    }

    char kthCharacter(int k) {
        string s = "a";
        while (s.length() < k) {
            s = GenerateString(s);
        }
        return s[k - 1];
    }
};
