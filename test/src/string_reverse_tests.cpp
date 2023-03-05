#include <string>
#include "test/inc/common.h"
  
TEST(StringReverse , TestStringReverse) {
    
    std::string test_string = "hello world!";
    string_reverse(test_string);

    // We expect our class constructor to increment the n_instances counter
    EXPECT_EQ(test_string, "!dlrow olleh") << ERR_PREFIX
                                << "Expected 'hello world!' reversed";

}
 