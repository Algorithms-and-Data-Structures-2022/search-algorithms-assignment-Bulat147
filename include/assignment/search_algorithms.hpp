#pragma once

#include <vector>
#include <optional>

namespace assignment {

  namespace linear_search {

    // линейный поиск с начала
    std::optional<int> linear_search_iterative(const std::vector<int>& data, int target) {

      for (int index = 0; index < data.size(); ++index) {
        if (data[index] == target) {
          return index;
        }
      }

      return std::nullopt;
    }

    // рекурсивный линейный поиск с конца
    std::optional<int> linear_search_recursive_helper(const std::vector<int>& data, int target, int curr_index) {

      if (curr_index < 0) {
        return std::nullopt;
      }

      if (data[curr_index] == target) {
        return curr_index;
      }

      return linear_search_recursive_helper(data, target, curr_index - 1);
    }

    std::optional<int> linear_search_recursive(const std::vector<int>& data, int target) {
      return linear_search_recursive_helper(data, target, static_cast<int>(data.size()) - 1);
    }

    // линейный поиск с начала и конца (два указателя / two pointers)
    std::optional<int> linear_search_iterative_two_pointers(const std::vector<int>& data, int target) {

      int left_index = 0;
      int right_index = static_cast<int>(data.size()) - 1;

      while (left_index <= right_index) {

        if (data[left_index] == target) {
          return left_index;
        }

        if (data[right_index] == target) {
          return right_index;
        }

        // обновляем индексы (указатели)
        left_index += 1;
        right_index -= 1;
      }

      return std::nullopt;
    }

  }  // namespace linear_search

  namespace binary_search {

    std::optional<int> binary_search_iterative(const std::vector<int>& data, int target) {

      int left_index = 0;
      int right_index = static_cast<int>(data.size());
      int middle_index = left_index + 0;

      while (left_index <= right_index) {}

      return std::nullopt;
    }

    std::optional<int> binary_search_recursive_helper(const std::vector<int>& data, int target, int left_index,
                                                      int right_index) {
      return std::nullopt;
    }

    std::optional<int> binary_search_recursive(const std::vector<int>& data, int target) {
      return binary_search_recursive_helper(data, target, 0, static_cast<int>(data.size()) - 1);
    }

  }  // namespace binary_search

}  // namespace assignment
