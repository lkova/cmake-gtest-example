#include "Example.hpp"

#include<gtest/gtest.h>


TEST(ExampleTests, MAC) {
    int x = 30;
    int y = 10;
    int sum = 100;
    int old_sum = sum;
    int expected_new_sum = old_sum + x * y;

    EXPECT_EQ(
        expected_new_sum,
        MAC(x, y, sum)
    );
    
    EXPECT_EQ(
        expected_new_sum,
        sum 
    );
}

TEST(ExampleTests, Square) {
    int x = 5;
    int expected_square = x * x; 

    EXPECT_EQ(
        expected_square,
        Square(x)
    ); 
}