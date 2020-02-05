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

// Q3.1 w/o set Case 1: 1, 2, 2, 4
TEST(RemoveDuplicateShould1, ReturnRemoveDuplicate1) {
    Solution solution;
    std::vector<int> actual = {1,2,2,4};
    solution.removeDuplicate(actual);
    std::vector<int> expected = {1,2,4};

    EXPECT_EQ(expected, actual);
}

// Q3.1 w/o set Case 2: 1, 2, 2, 5, 4, 5, 7
TEST(RemoveDuplicateShould2, ReturnRemoveDuplicate2) {
    Solution solution;
    std::vector<int> actual = {1, 2, 2, 5, 4, 5, 7};
    solution.removeDuplicate(actual);
    std::vector<int> expected = {1,2,5, 4, 7};

    EXPECT_EQ(expected, actual);
}

// Q3.1 w/ set Case 1: 1, 2, 2, 4
TEST(RemoveDuplicateSetShould1, ReturnRemoveDuplicateSet1) {
    Solution solution;
    std::vector<int> actual = {1,2,2,4};
    solution.removeDuplicateSet(actual);
    std::vector<int> expected = {1,2,4};

    EXPECT_EQ(expected, actual);
}

// Q3.1 w/ set Case 2: 1, 2, 2, 5, 4, 5, 7
TEST(RemoveDuplicateSetShould2, ReturnRemoveDuplicateSet2) {
    Solution solution;
    std::vector<int> actual = {1, 2, 2, 5, 4, 5, 7};
    solution.removeDuplicateSet(actual);
    std::vector<int> expected = {1,2,5, 4, 7};

    EXPECT_EQ(expected, actual);
}

// Q3.2 case 1: 1, 2, 3
TEST(ReverseShould1, ReturnReverse1) {
    Solution solution;
    std::vector<int> actual = {1, 2, 3};
    solution.reverse(actual);
    std::vector<int> expected = {3, 2, 1};

    EXPECT_EQ(expected, actual);
}

// Q3.2 case 2: 2,-2,1,3,4
TEST(ReverseShould2, ReturnReverse2) {
    Solution solution;
    std::vector<int> actual = {2,-2,1,3,4};
    solution.reverse(actual);
    std::vector<int> expected = {4, 3, 1, -2, 2};

    EXPECT_EQ(expected, actual);
}

// Q3.3 case 1: 1, 2, 3
TEST(RemoveOddShould1, ReturnRemoveOdd1) {
    Solution solution;
    std::vector<int> actual = {1, 2, 3};
    solution.removeOdd(actual);
    std::vector<int> expected = {2};

    EXPECT_EQ(expected, actual);
}

// Q3.3 case 2: -4, 3, -7, 9, 1, 2, -2, 0
TEST(RemoveOddShould2, ReturnRemoveOdd2) {
    Solution solution;
    std::vector<int> actual = {-4, 3, -7, 9, 1, 2, -2, 0};
    solution.removeOdd(actual);
    std::vector<int> expected = {-4, 2, -2, 0};

    EXPECT_EQ(expected, actual);
}

// Q3.4 case 1: [1,2,3] + [4, 5, 6]
TEST(ConcatShould1, ReturnConcat1) {
    Solution solution;
    std::vector<int> vec1 = {1,2,3};
    std::vector<int> vec2 = {4, 5, 6};
    std::vector<int> actual = solution.concat(vec1, vec2);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};

    EXPECT_EQ(expected, actual);
}

// Q3.4 case 2: [-2, 3, 4] + [1, 0]
TEST(ConcatShould2, ReturnConcat2) {
    Solution solution;
    std::vector<int> vec1 = {-2, 3, 4};
    std::vector<int> vec2 = {1, 0};
    std::vector<int> actual = solution.concat(vec1, vec2);
    std::vector<int> expected = {-2, 3, 4, 1, 0};

    EXPECT_EQ(expected, actual);
}

// Q3.5 case 1: [1, 2, 3] U [3, 4, 5]
TEST(UnionShould1, ReturnUnion1) {
    Solution solution;
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {3, 4, 5};
    std::vector<int> actual = solution.unionVec(vec1, vec2);
    std::vector<int> expected = {3};

    EXPECT_EQ(expected, actual);
}

// Q3.5 case 2: [-1, 2, 0, 3, 4] U [2, -1, 5, 7]
TEST(UnionShould2, ReturnUnion2) {
    Solution solution;
    std::vector<int> vec1 = {-1, 2, 0, 3, 4};
    std::vector<int> vec2 = {2, -1, 5, 7};
    std::vector<int> actual = solution.unionVec(vec1, vec2);
    std::vector<int> expected = {-1, 2};

    EXPECT_EQ(expected, actual);
}

// Q4 Reference case 1: x=20, y=30
TEST(SwapShould1, ReturnSwap1) {
    Solution solution;
    int x = 20;
    int y = 30;
    solution.swap(x, y);
    std::vector<int> actual = {x, y};  
    std::vector<int> expected = {30, 20};

    EXPECT_EQ(expected, actual);
}

// Q4 Reference case 2: x = -2, y = 0
TEST(SwapShould2, ReturnSwap2) {
    Solution solution;
    int x = -2;
    int y = 0;
    solution.swap(x, y);
    std::vector<int> actual = {x, y};  
    std::vector<int> expected = {0, -2};

    EXPECT_EQ(expected, actual);
}

// Q4 Pointer case 1: x = 20, y = 30
TEST(Swap2Should1, ReturnSwap21) {
    Solution solution;
    int x = 20;
    int y = 30;
    solution.swap2(&x, &y);
    std::vector<int> actual = {x, y};  
    std::vector<int> expected = {30, 20};

    EXPECT_EQ(expected, actual);
}

// Q4 Pointer case 2: x = -2, y = 0
TEST(Swap2Should2, ReturnSwap22) {
    Solution solution;
    int x = -2;
    int y = 0;
    solution.swap2(&x, &y);
    std::vector<int> actual = {x, y};  
    std::vector<int> expected = {0, -2};

    EXPECT_EQ(expected, actual);
}

// Q5.1 case 1: "TEST", 0, 1
TEST(StrSwapShould1, ReturnStrSwap1) {
    Solution solution;
    std::string actual = "TEST";
    solution.strSwap(actual, 0, 1);
    std::string expected = "ETST";

    EXPECT_EQ(expected, actual);
}

// Q5.1 case 2: "EE599", 2, 3
TEST(StrSwapShould2, ReturnStrSwap2) {
    Solution solution;
    std::string actual = "EE599";
    solution.strSwap(actual, 2, 3);
    std::string expected = "EE959";

    EXPECT_EQ(expected, actual);
}

// Q5.2 case 1: "EE599"
TEST(StrRevShould1, ReturnStrRev1) {
    Solution solution;
    std::string actual = "EE599";
    solution.strRev(actual);
    std::string expected = "995EE";

    EXPECT_EQ(expected, actual);
}

// Q5.2 case 2: "TEST-EE599"
TEST(StrRevShould2, ReturnStrRev2) {
    Solution solution;
    std::string actual = "TEST-EE599";
    solution.strRev(actual);
    std::string expected = "995EE-TSET";

    EXPECT_EQ(expected, actual);
}

// Q5.3 case 1: "EE599"
TEST(StrLowerShould1, ReturnStrLower1) {
    Solution solution;
    std::string actual = "EE599";
    solution.strLower(actual);
    std::string expected = "ee599";

    EXPECT_EQ(expected, actual);
}


// Q5.3 case 2: "TEST-EE599"
TEST(StrLowerShould2, ReturnStrLower2) {
    Solution solution;
    std::string actual = "TEST-EE599";
    solution.strLower(actual);
    std::string expected = "test-ee599";

    EXPECT_EQ(expected, actual);
}

// Q6 case 1: "madam"
TEST(IsPalindromeShould1, ReturnIsPalindrome1) {
    Solution solution;
    std::string str = "madam";
    bool actual = solution.isPalindrome(str);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q6 case 2: "RAceCar"
TEST(IsPalindromeShould2, ReturnIsPalindrome2) {
    Solution solution;
    std::string str = "RAceCar";
    bool actual = solution.isPalindrome(str);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q6 case 3: "ricecar"
TEST(IsPalindromeShould3, ReturnIsPalindrome3) {
    Solution solution;
    std::string str = "ricecar";
    bool actual = solution.isPalindrome(str);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q6 case 4: "A man, a plan, a canal, Panama!"
TEST(IsPalindromeShould4, ReturnIsPalindrome4) {
    Solution solution;
    std::string str = "A man, a plan, a canal, Panama!";
    bool actual = solution.isPalindrome(str);
    bool expected = true;

    EXPECT_EQ(expected, actual);
}

// Q6 case 5: "o 'x' in Nixon"
TEST(IsPalindromeShould5, ReturnIsPalindrome5) {
    Solution solution;
    std::string str = "o 'x' in Nixon";
    bool actual = solution.isPalindrome(str);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q6 case 6: "'x' in Nixon"
TEST(IsPalindromeShould6, ReturnIsPalindrome6) {
    Solution solution;
    std::string str = "'x' in Nixon";
    bool actual = solution.isPalindrome(str);
    bool expected = false;

    EXPECT_EQ(expected, actual);
}

// Q7 case 1: "add", "egg"
TEST(GetStrMapShould1, ReturnGetStrMap1) {
    Solution solution;
    std::string str1 = "add";
    std::string str2 = "egg";
    std::map<char, char> actual = solution.getStrMap(str1, str2);
    std::map<char, char> expected = {{'a', 'e'},
                                    {'d', 'g'}};

    EXPECT_EQ(expected, actual);
}

// Q7 case 2: "extreme", "egg"
TEST(GetStrMapShould2, ReturnGetStrMap2) {
    Solution solution;
    std::string str1 = "extreme";
    std::string str2 = "egg";
    std::map<char, char> actual = solution.getStrMap(str1, str2);
    std::map<char, char> expected = {};

    EXPECT_EQ(expected, actual);
}

// Q7 case 3: "harder", "waiter"
TEST(GetStrMapShould3, ReturnGetStrMap3) {
    Solution solution;
    std::string str1 = "harder";
    std::string str2 = "waiter";
    std::map<char, char> actual = solution.getStrMap(str1, str2);
    std::map<char, char> expected = {};

    EXPECT_EQ(expected, actual);
}

// Q7 case 4: "harder", "warter"
TEST(GetStrMapShould4, ReturnGetStrMap4) {
    Solution solution;
    std::string str1 = "harder";
    std::string str2 = "warter";
    std::map<char, char> actual = solution.getStrMap(str1, str2);
    std::map<char, char> expected = {{'h', 'w'},
                                    {'a', 'a'},
                                    {'r', 'r'},
                                    {'d', 't'},
                                    {'e', 'e'}};

    EXPECT_EQ(expected, actual);
}

// Q8 case 1: {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500}
TEST(ReshapeMedianShould1, ReturnReshapeMedian1) {
    Solution solution;
    std::vector<int> actual = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    solution.reshapeMedian(actual);
    std::vector<int> expected = {43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99};

    EXPECT_EQ(expected, actual);
}

// Q8 case 2: {3, -1, 9, -45, 0, 2, 3}
TEST(ReshapeMedianShould2, ReturnReshapeMedian2) {
    Solution solution;
    std::vector<int> actual = {3, -1, 9, -45, 0, 2, 3};
    solution.reshapeMedian(actual);
    std::vector<int> expected = {0, -1, -45, 2, 9, 3, 3};

    EXPECT_EQ(expected, actual);
}

// Q8 case 3: {1, 0, 1}
TEST(ReshapeMedianShould3, ReturnReshapeMedian3) {
    Solution solution;
    std::vector<int> actual = {1, 0, 1};
    solution.reshapeMedian(actual);
    std::vector<int> expected = {0, 1, 1};

    EXPECT_EQ(expected, actual);
}