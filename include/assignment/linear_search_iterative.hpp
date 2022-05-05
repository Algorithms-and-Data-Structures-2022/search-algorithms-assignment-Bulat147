#pragma once

#include "assignment/private/search_strategy.hpp"

namespace assignment {

  struct LinearSearchIterative final : SearchStrategy {

    /**
     * Последовательный поиск элемента в массиве.
     *
     * Сложность ~ O(N).
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @return индекс найденного элемента
     */
    std::optional<int> Search(const std::vector<int>& arr, int search_elem) const override;
  };

}  // namespace assignment