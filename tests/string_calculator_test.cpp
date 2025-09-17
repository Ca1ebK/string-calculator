#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/string_calculator.hpp"

TEST_CASE( "series of tests" ) {
    REQUIRE(string_calculator("") == 0);
	REQUIRE(string_calculator("0") == 0);
	REQUIRE(string_calculator("1") == 1);
	REQUIRE(string_calculator("1,2") == 3);
	REQUIRE(string_calculator("4,5,6") == 15);
    REQUIRE(string_calculator(";") == 0);
}