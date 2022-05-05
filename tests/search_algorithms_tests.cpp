#include <catch2/catch.hpp>

#include "utils.hpp"  // rand_array
#include "assignment/search_algorithms.hpp"

using namespace assignment;

SCENARIO("LinearSearch::Iterative") {
  using linear_search::linear_search_iterative;

  const int size = GENERATE(range(0, 50));
  const auto data = utils::rand_array(size, 0, 32768, true);

  if (size == 0) {

    SECTION("search in empty data") {
      const int search_elem = GENERATE(take(50, random(0, 32768)));

      CHECK_FALSE(linear_search_iterative(data, search_elem).has_value());
    }

  } else {

    SECTION("search for an existing element") {
      const int elem_index = GENERATE_REF(range(0, size));
      const int search_elem = data[elem_index];

      const auto search_result = linear_search_iterative(data, search_elem);

      CHECK(search_result.has_value());
      CHECK(search_result.value() == elem_index);
    }

    SECTION("search for a non-existing element") {
      const int search_elem = GENERATE(take(50, random(32769, 64000)));

      CHECK_FALSE(linear_search_iterative(data, search_elem).has_value());
    }
  }

  //  linear_search::linear_search_iterative(data);
}