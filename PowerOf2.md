# 231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1

Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16

Example 3:

Input: n = 3
Output: false

 

Constraints:

    -2^31 <= n <= 2^31 - 1

 
Follow up: Could you solve it without loops/recursion?
 
 
# Solution

[Code](febcodes/feb_08.cpp)

So the solution is found pretty well using first approach, then the follow up question interested me into thinking another way using logarithmic functions.

There is normal log(x) for log base 10 and log2(x) for log base 2

And it too went pretty well, i found the log, if the log isnt a whole number, then it is not power of true

I implemented check for it by converting the log value to int and storing in another variable, and by subtracting both these int and double value, if get 0 then it is power of 2.


