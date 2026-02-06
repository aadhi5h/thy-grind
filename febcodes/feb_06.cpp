#include<iostream>

struct ListNode{
    int val;
    struct ListNode *next;
};

ListNode* FindMiddleNode(ListNode *head){
    ListNode *L1 = head;
    int counter = 0;
    while (L1->next != nullptr){
        L1 = L1->next;
        counter++;
    }
    int value;
    if (counter % 2 == 0) value = counter/2;
    else value = (counter/2)+1;

    counter = 0;
    ListNode *L2 = head;
    while (counter != value){
        L2 = L2->next;
        counter++;
    }
    return L2;
}