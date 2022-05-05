#include "assignment/linear_search_recursive.hpp"

namespace assignment {

  std::optional<int> LinearSearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с индексом последнего элемента массива
    return search(arr, search_elem, static_cast<int>(arr.size() - 1));
  }

  std::optional<int> LinearSearchRecursive::search(const std::vector<int>& arr, int search_elem, int curr_index) const {
    // Tips:
    // 1. Укажите случаи выхода из рекурсии: (а) обошли все элементы и (б) элемент найден.
    // 2. Вызовите рекурсивный метод с другим индексом.

    return std::nullopt;
  }

}  // namespace assignment