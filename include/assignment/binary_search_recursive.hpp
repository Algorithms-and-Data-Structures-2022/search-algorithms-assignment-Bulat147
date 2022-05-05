#pragma once

#include "assignment/private/search_strategy.hpp"

namespace assignment {

  struct BinarySearchRecursive final : SearchStrategy {

    /**
     * Двоичный поиск элемента в массиве (рекурсия).
     *
     * Область поиска элемента каждый раз сокращается вдвое.
     * Примечание: гарантируется, что элементы входного массива находятся в порядке неубывания.
     *
     * Сложность ~ O(log N).
     * Сложность сортировки ~ O(N * log N)
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @return индекс найденного элемента
     */
    std::optional<int> Search(const std::vector<int>& arr, int search_elem) const override;

   private:
    /**
     * Вспомогательная функция для реализации рекурсивного поиска элемента в массиве.
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @param start - индекс левой границы области поиска
     * @param stop - индекс правой границы области поиска
     * @return индекс найденного элемента
     */
    std::optional<int> search(const std::vector<int>& arr, int search_elem, int start, int stop) const;
  };

}  // namespace assignment