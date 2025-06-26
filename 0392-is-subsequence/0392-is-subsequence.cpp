class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        int l = 0;
        int r = 0;

        while(l < n && r < m){

            if(s[l] == t[r]){
                l++;
                r++;
            }
            else{
                r++;
            }
        }

        return l == n;

    }
};