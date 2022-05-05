#pragma once

#include "assignment/private/search_strategy.hpp"

namespace assignment {

  struct LinearSearchRecursive final : SearchStrategy {

    /**
     * Последовательный поиск элемента в массиве (рекурсия).
     *
     * Сложность ~ O(N).
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
     * Примечание: поиск элемента начинается с конца массива.
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @param curr_index - индекс текущего элемента
     * @return индекс найденного элемента
     */
    std::optional<int> search(const std::vector<int>& arr, int search_elem, int curr_index) const;
  };

}  // namespace assignment