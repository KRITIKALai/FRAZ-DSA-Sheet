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

Node *findMiddle(Node *head) {
    // Write your code here
    Node *temp1 = head;
    Node *temp2 = head;
    while(temp2!=NULL && temp2->next!=NULL){
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    return temp1;
}
