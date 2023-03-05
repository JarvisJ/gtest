#include "code/inc/fizz_buzz.h"
#include <string>
#include <algorithm> 
/**
*
* Exercise 2:
* Write a function that reverses a string.
*
*/
void string_reverse(std::string &input_string) {
   std::reverse(input_string.begin(), input_string.end());
}

