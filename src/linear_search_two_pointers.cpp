#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int left = 0;
    int right = static_cast<int>(arr.size() - 1);
    while (left <= right){
      if (arr[left] == search_elem){
        return left;
      }
      if (arr[right] == search_elem){
        return right;
      }
      left++;
      right--;
    }
    return std::nullopt;
  }

}  // namespace assignment