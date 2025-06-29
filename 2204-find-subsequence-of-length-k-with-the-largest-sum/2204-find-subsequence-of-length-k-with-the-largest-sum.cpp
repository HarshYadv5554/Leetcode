class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<pair<int,int>>v(n);

        for(int i = 0; i<n; i++){
            v[i] = make_pair(i,nums[i]);
        }

        auto lambda = [](auto &p1, auto& p2){
            return p1.second > p2.second;
        };

        sort(begin(v), end(v), lambda);
        sort(begin(v), begin(v)+k);

        vector<int> ans(k);
        for(int i = 0; i<k; i++){
            ans[i] =  v[i].second;
        }

        return ans;
    }
};