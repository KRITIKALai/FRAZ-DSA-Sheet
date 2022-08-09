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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node *temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    
    if(pos>=len) return head;
    if(pos==0){
        return head->next;
        temp->next = NULL;
        delete temp; 
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        
        int count = 0;
        
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    return head;
}
