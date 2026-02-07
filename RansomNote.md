# 383. Ransom Note

Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true

 

Constraints:

    1 <= ransomNote.length, magazine.length <= 105
    ransomNote and magazine consist of lowercase English letters.


# Solution

[Code](febcodes/feb_07.cpp)

First problem i felt challenging really, it took me 50 mins to solve this problem. 

Some of the mistakes I made are:

- Used count() inside loop.
- Wastefully made unwanted variables.
- Tried two different approach same time.
- Unwanted initial checks

The lessons i learnt today are:

- map[key] automatically is 0 if key not in the map, no need check.
- No need of redundant basic checks if general condition solves it.
- DO NOT SORT WHEN IT IS ABOUT CHARACTERS INSIDE STRING.
- Do not comment out past approaches, it confuses.