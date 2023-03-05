#include "code/inc/fizz_buzz.h"
#include <iostream>
/**
*
* Exercise 1: 
* Write a function that prints the numbers from 1 to 100. But for multiples of three print "Fizz" 
* instead of the number and for the multiples of five print "Buzz". 
* For numbers which are multiples of both three and five print "FizzBuzz".
*
*/

void fizz_buzz(int num_of_iterations) {
    for(int i = 1; i <= num_of_iterations; i++) {
        bool mod_3 = i % 3 == 0;
        bool mod_5 = i % 5 == 0;
        bool both = mod_3 && mod_5;

        if(both) {
            std::cout << "FizzBuzz";
        }
        else if (mod_3) {
            std::cout << "Fizz";
        }
        else if (mod_5) {
            std::cout << "Buzz";
        }
        else {
            std::cout << i;
        }
    }
}

