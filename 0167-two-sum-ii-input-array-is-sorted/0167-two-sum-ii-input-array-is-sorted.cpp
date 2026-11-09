class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;
        int end = numbers.size() - 1;

        while (start < end) {

            int currentsum = numbers[start] + numbers[end];

            if (currentsum == target) {
                return {start + 1, end + 1};
            } else if (currentsum < target) {
                start++;
            } else {
                end--;
            }
        }

        return {};
    }
};