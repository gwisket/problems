#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
      std::sort(nums.begin(), nums.end());
      nums.erase(std::unique(nums.begin(), nums.end()), nums.end());

      return nums.size();
    }
};

