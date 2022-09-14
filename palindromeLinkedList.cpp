#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL){
        return true;
    }
    LinkedListNode<int> *temp = head;
    vector<int> ar;
    while(temp!=NULL){
        ar.push_back(temp->data);
        temp = temp->next;
    }
    int first=0,last=ar.size()-1;
    while(first<=last){
        if(ar[first++]!=ar[last--]){ 
            return false;  
        } 
    }
    return true;
}
