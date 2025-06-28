class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        vector<pair<int,int>>v;

        for(int i = 0; i<nums.size(); i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end(), [](const pair<int, int>& a, const pair<int,int>& b) {
            return a.first > b.first;
        });

        vector<pair<int,int>> topK(v.begin(),v.begin() + k);

        sort(topK.begin(),topK.end(), [](const pair<int,int> & a, const pair<int, int> & b){
            return a.second < b.second;
        });

        vector<int>result;
        for(int i = 0; i< topK.size(); i++){
            result.push_back(topK[i].first);
        }

        return result;
    }
};