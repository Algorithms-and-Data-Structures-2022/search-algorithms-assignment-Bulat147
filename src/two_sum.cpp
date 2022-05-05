#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = static_cast<int>(arr.size() - 1);
    int summing;
    while (left < right){
      summing = arr[left] + arr[right];
      if (summing == sum){
        return std::make_pair(left, right);
      }
      if (summing > sum){
        right--;
      }
      if (summing < sum){
        left++;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment