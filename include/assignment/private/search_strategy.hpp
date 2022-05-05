#pragma once

#include <vector>
#include <optional>

namespace assignment {

  /**
   * Интерфейс стратегии поиска элементов в массиве.
   */
  struct SearchStrategy {

    virtual ~SearchStrategy() = default;

    /**
     * Поиск элемента в массиве.
     *
     * Поведение зависит от конкретной реализации.
     *
     * @param arr - массив элементов
     * @param search_elem - значение элемента, которое необходимо найти
     * @return индекс найденного элемента
     */
    virtual std::optional<int> Search(const std::vector<int>& arr, int search_elem) const = 0;
  };

}  // namespace assignment