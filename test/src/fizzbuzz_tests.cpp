

#include "test/inc/common.h"

/**
*
* Write a program that prints the numbers from 1 to 100. But for multiples of three print "Fizz" 
* instead of the number and for the multiples of five print "Buzz". 
* For numbers which are multiples of both three and five print "FizzBuzz".
*
*/

TEST(FizzBuzz, TestFizzBuzz) {
    testing::internal::CaptureStdout();
    
    fizz_buzz(30);
    std::string output = testing::internal::GetCapturedStdout();

    // We expect our class constructor to increment the n_instances counter
    EXPECT_EQ(output, "12Fizz4BuzzFizz78FizzBuzz11Fizz1314FizzBuzz1617Fizz19BuzzFizz2223FizzBuzz26Fizz2829FizzBuzz") << ERR_PREFIX
                                << "Expected correcter fizz buzz output";
}