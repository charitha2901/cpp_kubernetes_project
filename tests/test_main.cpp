#include <gtest/gtest.h>
#include "../src/calculator.h"

TEST(TestCalculator, AdditionTest)
{
    Calculator calc;

    EXPECT_EQ(calc.add(20, 25), 45);
}

TEST(TestCalculator, SubtractionTest)
{
    Calculator calc;

    EXPECT_EQ(calc.subtract(50, 30), 20);
}