#include "solution.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

#include "src/lib/solution.h"

std::string Solution::HelloWorld() {
    return "HelloWorld";
}

// Q1
int Solution::add(int num1, int num2) {
    return num1 + num2;
}

std::string Solution::add(std::string str1, std::string str2) {
    return str1 + str2;
}

std::string Solution::add(int num, std::string str) {
    return std::to_string(num) + str;
}

std::string Solution::add(std::string str, int num) {
    return str + std::to_string(num);
}

// 3.1a No std::set
void Solution::removeDuplicate(std::vector<int> &input) {
    bool isDuplicated = false;
    std::vector<int>::iterator itInput = input.begin();
    std::vector<int>::iterator itBefore;
    while (itInput != input.end()) {
        for (itBefore = input.begin(); itBefore != itInput; itBefore++) {
            if (*itBefore == *itInput) {
                isDuplicated = true;
                break;
            }
        }
        if (isDuplicated == true) {
            input.erase(itInput);
            isDuplicated = false;
        }
        else itInput++;
    }
}

// 3.1b With std::set
void Solution::removeDuplicateSet(std::vector<int> &input) {
    std::set<int> duList;  // Duplicate List
    std::vector<int>::iterator itInput = input.begin();
    while (itInput != input.end()) {
        if (duList.find(*itInput) != duList.end()) {
            input.erase(itInput);
        }
        else {
            duList.insert(*itInput);
            itInput++;
        }
    }
}

// 3.2
// reverse vector
void Solution::reverse(std::vector<int> &input) {
    int temp = 0;
    std::vector<int>::iterator itForwardInput = input.begin();
    std::vector<int>::reverse_iterator itBackInput = input.rbegin();
    while (itForwardInput != input.begin() + input.size() / 2) {
        temp = *itForwardInput;
        *itForwardInput = *itBackInput;
        *itBackInput = temp;
        itForwardInput++;
        itBackInput++;
    }
}

// 3.3
void Solution::removeOdd(std::vector<int> &input) {
    std::vector<int>::iterator it = input.begin();
    while (it != input.end()) {
        if (*it % 2 == 1 || *it % 2 == -1) {
            input.erase(it);
        }
        else {
            it++;
        }
    }
}

// 3.4 Concatena
std::vector<int> Solution::concat(std::vector<int> vec1, std::vector<int> &vec2) {
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());
    return vec1;
}

// 3.5 Union
std::vector<int> Solution::unionVec(std::vector<int> &vec1, std::vector<int> &vec2) {
    std::vector<int>::iterator it1 = vec1.begin();
    std::vector<int> returnVec = {};
    for (; it1 != vec1.end(); it1++) {
        if (std::find(vec2.begin(), vec2.end(), *it1) != vec2.end() && std::find(returnVec.begin(), returnVec.end(), *it1) == returnVec.end() ) {
            returnVec.push_back(*it1);
        }
    }
    return returnVec;
}

// 4.1 Reference
void Solution::swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// 4.2 Pointer
void Solution::swap2(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// 5.1
void Solution::strSwap(std::string &str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// 5.2
void Solution::strRev(std::string &str) {
    for (int i = 0; i < str.size() / 2; i++) {
        std::swap(str[i], str[str.size() - 1 - i]);
    }
}

//5.3
void Solution::strLower(std::string &str) {
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        *it = std::tolower(*it);
    }
}

// 6 Help function
void Solution::strStrip(std::string &str) {
    std::string::iterator it = str.begin();
    while (it != str.end()) {
        if (!(std::isalpha(*it)) && !(std::isdigit(*it))) {
            str.erase(it);
        }
        else {
            it++;
        }
    }
}

// 6
bool Solution::isPalindrome(std::string &str) {
    strStrip(str);
    strLower(str);
    std::string::iterator itFwd = str.begin();
    std::string::reverse_iterator itBack = str.rbegin();
    for (; itFwd != str.begin() + str.size()/2; itFwd++, itBack++) {
        if (*itFwd != *itBack) return false;
    }
    return true;
}

// 7 Map
std::map<char, char> Solution::getStrMap(std::string str1, std::string str2) {
    std::map<char, char> returnMap;
    std::map<char, char>::iterator itMap;
    std::string::iterator it1 = str1.begin();
    std::string::iterator it2 = str2.begin();
    for (; it1 != str1.end(); it1++, it2++) {
        itMap = returnMap.find((*it1));
        if (itMap  != returnMap.end()) {
            if ((*itMap).second != *it2) {
                returnMap.clear();
                return returnMap;
            }
        }
        else {
            returnMap.insert(std::pair<char, char> (*it1, *it2));
        }
    }
    return returnMap;
}

// 8 help functioms
void Solution::insertSort(std::vector<int> &vec) {
    std::vector<int>::iterator itFwd = std::next(vec.begin());
    for (; itFwd != vec.end(); itFwd++) {
        std::vector<int>::reverse_iterator itBack = std::reverse_iterator<std::vector<int>::iterator>(itFwd);
        for (; itBack != vec.rend(); itBack++) {
            if (*itBack > *std::prev(itBack)) {
                std::swap(*itBack, *std::prev(itBack));
            }
            else {
                break;
            }
        }
    }
}

// 8 Median
void Solution::reshapeMedian(std::vector<int> &vec) {
    // sort
    insertSort(vec);
    // reverse
    reverse(vec);

    // swap
    std::vector<int>::iterator it1 = vec.begin();
    std::vector<int>::iterator it2 = vec.begin() + vec.size() / 2 + 1;
    for (;it1 != vec.begin() + vec.size() / 2; it1++, it2++) {
        std::swap(*it1, *it2);
    }
}