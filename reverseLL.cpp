#include <bits/stdc++.h> 
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

Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node *prev = NULL;
    Node *curr = head;
    Node *frwd = NULL;
   
    while(curr!=NULL){
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
    }
 
    return prev;
}

