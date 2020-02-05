#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

#include "src/lib/solution.h"

TEST(HelloWorldShould, ReturnHelloWorld) {
    Solution solution;

    std::string actual = solution.HelloWorld();
    std::string expected = "HelloWorld";

    EXPECT_EQ(expected, actual);
}


// Q1 Case 1: int + int
TEST(AddShould1, ReturnAdd1) {
    Solution solution;
    int num1 = 3;
    int num2 = -2;
    int actual = solution.add(num1, num2);
    int expected = 1;

    EXPECT_EQ(expected, actual);
}

// Q1 Case 2: str + str
TEST(AddShould2, ReturnAdd2) {
    Solution solution;
    std::string str1 = "A string";
    std::string str2 = "Another string";
    std::string actual = solution.add(str1, str2);
    std::string expected = "A stringAnother string";

    EXPECT_EQ(expected, actual);
}

// Q1 Case 3: int + str
TEST(AddShould3, ReturnAdd3) {
    Solution solution;
    int num = 3;
    std::string str = "Another string";
    std::string actual = solution.add(num, str);
    std::string expected = "3Another string";

    EXPECT_EQ(expected, actual);
}

// // Q1 Case 4: str + int
TEST(AddShould4, ReturnAdd4) {
    Solution solution;
    int num = -2;
    std::string str = "A string";
    std::string actual = solution.add(str, num);
    std::string expected = "A string-2";

    EXPECT_EQ(expected, actual);
}

// // Q2 Case 1: int
TEST(SizeOfShould1, ReturnSizeOf1) {
    Solution solution;
    int num[] = {3, 4, -2, 5};
    int actual = solution.sizeOf(num);
    int expected = 4;

    EXPECT_EQ(expected, actual);
}

// // Q2 Case 2: chars
TEST(SizeOfShould2, ReturnSizeOf2) {
    Solution solution;
    char in[] = {'a', 'b', 'c', 'd'};
    int actual = solution.sizeOf(in);
    int expected = 4;

    EXPECT_EQ(expected, actual);
}

// Q2 Case 3: floats
TEST(SizeOfShould3, ReturnSizeOf3) {
    Solution solution;
    float in[] = {1.23, 2.45};
    int actual = solution.sizeOf(in);
    int expected = 2;

    EXPECT_EQ(expected, actual);
}

// Q3.1 w/o set Case 1: 1, 2, 2, 4
TEST(RemoveDuplicateShould1, ReturnRemoveDuplicate1) {
    Solution solution;
    std::vector<int> actual = {1,2,2,4};
    solution.removeDuplicate(actual);
    std::vector<int> expected = {1,2,4};

    EXPECT_EQ(expected, actual);
}

// Q3.1 w/o set Case 2: 1, 2, 2, 5, 4, 5, 7

// Q3.1 w/ set Case 1: 1, 2, 2, 4

// Q3.1 w/ set Case 2: 1, 2, 2, 5, 4, 5, 7


// Q3.2 case 1: 1, 2, 3

// Q3.2 case 2: 2,-2,1,3,4


// Q3.3 case 1: 1, 2, 3

// Q3.3 case 2: -4, 3, -7, 9, 1, 2, -2, 0

// Q3.4 case 1: [1,2,3] + [4, 5, 6]

// Q3.4 case 2: [-2, 3, 4] + [1, 0]

// Q3.5 case 1: [1, 2, 3] U [3, 4, 5]

// Q3.5 case 2: [-1, 2, 0, 3, 4] U [2, -1, 5, 7]




// Q4 Reference case 1: x=20, y=30

// Q4 Reference case 2: x = -2, y = 0


// Q4 Pointer case 1: x = 20, y = 30

// Q4 Pointer case 2: x = -2, y = 0


// Q5.1 case 1: "TEST", 0, 1


// Q5.1 case 2: "EE599", 2, 3

// Q5.2 case 1: "EE599"

// Q5.2 case 2: "TEST-EE599"

// Q5.3 case 1: "EE599"

// Q5.3 case 2: "TEST-EE599"


// Q6 case 1: "madam"

// Q6 case 2: "RAceCar"

// Q6 case 3: "ricecar"

// Q6 case 4: "A man, a plan, a canal, Panama!"

// Q6 case 5: "o 'x' in Nixon"

// Q6 case 6: "'x' in Nixon"

// Q7 case 1: "add", "egg"

// Q7 case 2: "extreme", "egg"

// Q7 case 3: "harder", "waiter"

// Q7 case 4: "harder", "warter"

// Q8 case 1: {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500}

// Q8 case 2: {3, -1, 9, -45, 0, 2, 3}

// Q8 case 3: {1, 0, 1}