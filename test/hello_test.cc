#include <gtest/gtest.h>

#include "../meaner.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest,ClassMeanerCheck) {

   std::vector<float> floats;
    floats.push_back(2.0);
    floats.push_back(2.0);
    floats.push_back(3.0);
    floats.push_back(8.0);
    floats.push_back(5.0);

    Meaner m;
    m.addNumbers(floats);

    EXPECT_FLOAT_EQ(m.meanOfFloats(),4.0);

}
