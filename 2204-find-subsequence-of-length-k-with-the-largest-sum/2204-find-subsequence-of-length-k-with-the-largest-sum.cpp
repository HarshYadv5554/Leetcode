#define pb push_back
#define F first
#define S second
class Solution {
public:
    vector<int> maxSubsequence(vector<int>&arr, int k) {
        int n=arr.size();
        vector<pair<int,int>>vp(n);
        for(int i=0;i<n;i++){
            vp[i]={arr[i],i};
        }
        sort(vp.rbegin(),vp.rend());
        vector<pair<int,int>>ans(k);
        for(int i=0;i<k;i++){
            ans[i]=vp[i];
        }
        sort(ans.begin(),ans.end(),[&](pair<int,int>&a,pair<int,int>&b){
            return a.S<b.S;
        });
        vector<int>res(k);
        for(int i=0;i<k;i++){
            res[i]=ans[i].F;
        }
        return res;
    }
};