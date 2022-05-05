#pragma once

#include "assignment/private/search_strategy.hpp"

namespace assignment {

  struct BinarySearchIterative final : SearchStrategy {

    /**
     * Двоичный поиск элемента в массиве.
     *
     * Область поиска элемента каждый раз сокращается вдвое.
     * Примечание: гарантируется, что элементы входного массива находятся в порядке неубывания.
     *
     * Сложность ~ O(log N).
     * Сложность сортировки ~ O(N * log N).
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @return индекс найденного элемента
     */
    std::optional<int> Search(const std::vector<int>& arr, int search_elem) const override;
  };

}  // namespace assignment