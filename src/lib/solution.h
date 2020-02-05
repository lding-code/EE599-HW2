#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

class Solution {

public:
    std::string HelloWorld();
    // Q1
    int add(int num1, int num2);
    std::string add(std::string str1, std::string str2);
    std::string add(int num, std::string str);
    std::string add(std::string str, int num);
    // Q2
    int sizeOf(int ptr[]);
    int sizeOf(char *ptr);
    int sizeOf(float ptr[]);
    // Q3
    void removeDuplicate(std::vector<int> &input);
    void removeDuplicateSet(std::vector<int> &input);
    void reverse(std::vector<int> &input);
    void removeOdd(std::vector<int> &input);
    std::vector<int> concat(std::vector<int> vec1, std::vector<int> &vec2);
    std::vector<int> unionVec(std::vector<int> &vec1, std::vector<int> &vec2);
    // Q4
    void swap(int &num1, int &num2);
    void swap2(int* ptr1, int* ptr2);
    // Q5
    void strSwap(std::string &str, int i, int j);
    void strRev(std::string &str);
    void strLower(std::string &str);
    // Q6 helper - strip non-alphabetic and non-digit char
    void strStrip(std::string &str);
    // Q6 actual method
    bool isPalindrome(std::string &str);
    // Q7
    std::map<char, char> getStrMap(std::string str1, std::string str2);
    // Q8 helper - sort the vector
    void insertSort(std::vector<int> &vec);
    // Q8 actual method
    void reshapeMedian(std::vector<int> &vec);
};

#endif