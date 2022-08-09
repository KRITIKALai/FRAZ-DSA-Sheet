/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

int binaryToInteger(int n, Node *head) {
    //    Write your code here
    Node *temp = head;
    int sum = 0;
    while(temp!=NULL){
        n--;
        sum += temp->data * (1<<n);
        temp = temp->next;
    }
    return sum;
}
