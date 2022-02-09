#define CATCH_CONFIG_MAIN
#include "Catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Joining Strings", "[join]") {
    std::vector<std::string> strings = {"word1", "word2", "word3"};
    REQUIRE(Join(strings, "_") == "word1_word2_word3");
    REQUIRE(Join(strings, " is not ") == "word1 is not word2 is not word3");
}

TEST_CASE("Adding N to elements of vector", "[VectorPlusN]") {
    std::vector<double> nums{1.0, 2.0, 3.0};
    REQUIRE(VectorPlusN(nums, 0.5) == std::vector<double>{1.5, 2.5, 3.5});
    REQUIRE(VectorPlusN(nums, -2.0) == std::vector<double>{-1.0, 0, 1.0});
}