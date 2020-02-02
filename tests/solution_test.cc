#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MappingShould, ReturnMap) {
  Solution solution;
  std::string from = "mommy", to = "daddy";
  std::map<char,char> mymap = solution.mapping(from,to);
  std::map<char,char> expected = {{'m','d'},{'o','a'},{'y','y'}};
  EXPECT_EQ(expected, mymap);
}
TEST(MappingShould, ReturnEmptyMap) {
  Solution solution;
  std::string from = "apple", to = "bazel";
  std::map<char,char> mymap = solution.mapping(from,to);
  std::map<char,char> expected = {};
  EXPECT_EQ(expected, mymap);
}