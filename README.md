Lei Ding

Q1:
funciton implemented in Solution class as add() method.
tested in GTest.

runtime:
O(1) for int addition.
O(n^2) for string concatenation

Q2:
such methods are implemented in the main.cc file since they are not easilyt implemented as a class method.
also tested in the main.cc file.

runtime:
O(1) since only a division operation is performed.

Q3.1:
function that removes all duplicates is implemented in Solution class as removeDuplicate().
tested in GTest.

runtime: O(n) for worst case if every element is duplicate

another function with set is implemented in Solution class as removeDuplicateSet()

runtime: O(n)


Q3.2:
funciton that reverses vector oder is implemented in Solution class as reverse()
tested in GTest.

runtime: O(n) maximum of n/2 swap is done.

Q3.3:
fuinction that removes odd number is implemented in Solution class as removeOdd()
tested in GTest.

runtime: O(n) for worst case where every number is odd.

Q3.4:
function that concatenates vectors is implemented in Solution class as concat()
tested in GTtest

runtime: O(nlog(n)) n elements being inserted with insert complexity of log(n)

Q3.5:
function that finds the union of two vectors is implemented in Solution class as unionVec()
tested in GTest

runtime: O(n) worst case n elemetns will be push_back to union vector and push_back has constant time complexity.

Q4.1:
function that finds swaps two int is implemented in Solution class as swap(int num1, int num2)

tested in GTest
runtime: O(1) only 3 operations are performed disregard of how large the number is.

Q4.2:
same function as Q4.1 using pointer is implemented in Solution class as swap2(int* num1, int* num2). Note that address of num1 and num2 should be passed to method swap2()
runtime: O(1)

Q5.1:
function that swap certain char in string is implemented in Solution class as strSwap().
tested in GTest
runtime: O(1)

Q5.2:
function implemented in Solution class as strRev().
tested in GTest
runtime: O(n) n / 2 swap operations are performed

Q5.3:
function implemented in Solution class as strLower().
tested in GTest
runtime: O(n) n / 2 toLower() operations are performed

Q6
function implemented in Solution class as isPalindrome().
a helper function strStrip is implemented to strip non-alphabetic and non-digit chars.
tested in GTest
runtime: O(n) n / 2 comparison operations are performed.

Q7
function implemented in Solution class as getStrMap().
tested in GTest
runtime: O(nlog(n)) n insert operations are performed with time complexity of log(n)

Q8
function is implemented in Solution class as reshapeMedian(). A helper function inserSort() is implemented to sort the input vector.
tested in GTest
runtime: O(n^2) for insertion sort, O(n) for swap elements
O(n^2) + O(n) = O(n^2)