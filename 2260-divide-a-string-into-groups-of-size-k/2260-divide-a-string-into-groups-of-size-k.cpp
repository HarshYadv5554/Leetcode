class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n = s.size();
        string y = "";

        for(int i = 0; i<n; i++){
            y+= s[i];
            if(y.length() == k){
                ans.push_back(y);
                y = "";
            }
        }
        if(y.length() != 0){
            while(y.length() <k){
                y+= fill;
            }
            ans.push_back(y);
        }
        return ans;
    }
};