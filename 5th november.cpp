class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int, int> mp;
        vector<pair<int, int>> ans;
        vector<int> rans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            ans.push_back(make_pair(it.second, it.first));
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        for(int i=n-1; i>(n-k-1); i--){
            rans.push_back(ans[i].second);
        }
        return rans;
    }
};
