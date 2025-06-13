class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;

        for(int i = 0; i < n-1; i++){
            mini = min(mini, abs(arr[i] - arr[i+1]));
        }

        for(int i = 0; i < n-1; i++){
            if(abs(arr[i] - arr[i+1]) == mini){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        
        return ans;
    }
};