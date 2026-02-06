# 876. Middle of the Linked List

# Floyd's Tortoise and Hare algorithm needed

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.

Example 2:

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

 

Constraints:

    The number of nodes in the list is in the range [1, 100].
    1 <= Node.val <= 100


# Solution

[Code](febcodes/feb_06.cpp)


By looking at the example and test cases i saw sorted linked list, and i tried  to solve it that way first until submission runs showed me different unordered Linked lists which halted it.

Then I made 2 counters and used those to solve. I believe it have another better solution with some algorithm.

