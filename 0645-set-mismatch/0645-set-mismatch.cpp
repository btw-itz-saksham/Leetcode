class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();

        vector<int> freq(n + 1, 0);
        vector<int> ans;

        // Calculate frequency
        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        // Find duplicate
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 2) {
                ans.push_back(i);
            }
        }

        // Find missing
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};