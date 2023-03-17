class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string s=str[0];
        int n=str.size();
        int ans=s.size();
        for(int i=0;i<n;i++){
    int j=0;
            while(j<str[i].length() && str[i][j]==s[j])j++;
            ans=min(ans,j);
        }
        return s.substr(0,ans);
    }
};
