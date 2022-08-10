/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
#include <set> 
#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
    // Write your code here
    unordered_set<int> nums;
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        if(nums.find(curr->data) != nums.end()){
            prev->next = curr->next;
            delete curr;
        }
        else{
            nums.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}
