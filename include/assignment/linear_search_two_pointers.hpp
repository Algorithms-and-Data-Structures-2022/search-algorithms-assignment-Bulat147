#pragma once

#include "assignment/private/search_strategy.hpp"

namespace assignment {

  struct LinearSearchTwoPointers final : SearchStrategy {

    /**
     * Последовательный поиск элемента в массиве (два указателя).
     *
     * Сложность ~ O(N).
     * Используются метод с двумя указателями на начало и конец массива.
     *
     * Метод позволяет немного оптимизировать алгоритм линейного поиска в случае,
     * если целевой элемент находится в конце массива.
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @return индекс найденного элемента
     */
    std::optional<int> Search(const std::vector<int>& arr, int search_elem) const override;
  };

}  // namespace assignment