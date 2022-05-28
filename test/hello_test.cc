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

class MeanerTestClass : public ::testing::Test {

protected: //make protected so that they can be used within test classes
  //var to use
  std::vector<float> floats2;
  Meaner m2;

  MeanerTestClass(){ }

  void SetUp() override{
    floats2.push_back(2.0);
    floats2.push_back(2.0);
    floats2.push_back(3.0);
    floats2.push_back(8.0);
    floats2.push_back(5.0);
    m2.addNumbers(floats2);
   }
  void TearDown(){ }

  ~MeanerTestClass() {}

};

TEST_F(MeanerTestClass,DefaultConstructor){
  EXPECT_FLOAT_EQ(m2.meanOfFloats(),4.0);
}
