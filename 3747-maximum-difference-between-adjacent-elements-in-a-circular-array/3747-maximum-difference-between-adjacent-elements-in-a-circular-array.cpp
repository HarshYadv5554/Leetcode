class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {

        int n = nums.size();
        int maxi = INT_MIN;
        for(int i =0; i < n; i++){
            if( abs(nums[i % n] - nums[(i+1) % n]) > maxi ){
                maxi = abs(nums[i % n] - nums[(i+1) % n]);
            }
        }
        return maxi;
    }
};