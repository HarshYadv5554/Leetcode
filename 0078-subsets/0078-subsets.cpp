class Solution {
public:
    void f(int index, vector<int>& v, vector<vector<int>>& ans, int n, vector<int>& nums){

        if(index >= n){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[index]);
        f(index + 1, v, ans, n, nums);
        v.pop_back();
       
       f(index +1, v, ans,n , nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> v;

        f(0,v,ans, n, nums);

        return ans;
        
    }
};