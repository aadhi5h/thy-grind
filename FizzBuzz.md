# 412. Fizz Buzz

Given an integer n, return a string array answer (1-indexed) where:

    answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
    answer[i] == "Fizz" if i is divisible by 3.
    answer[i] == "Buzz" if i is divisible by 5.
    answer[i] == i (as a string) if none of the above conditions are true.

 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]

Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]

Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

# Solution:

[code](febcodes/feb_04.cpp)

I fumbled a little.

I found out that if we are gonna assign value inside vector using v[i] , we first need to set its size which initializes in the vector declaration as:

vector<string> v(n); 

where n is the size of vector v.

It threw up some error unreadable but yea i could finally solve the problem quickly.

Also i need to be careful with loop iterations properly