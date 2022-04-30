// travfaarsal in linked list
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // next is pointer name of node type , node is user defined data type // int*ptr
};
void traversal(Node *n)
{
    while (n != NULL) //
    {
        cout << n->data << endl;
        n = n->next;
    }
}
void addlast(Node** head_ref, int new_data)
{
    Node* new_node = new Node();  //meory allooct
 
    Node *last = *head_ref; 
    new_node->data = new_data; //assign in data
    new_node->next = NULL;
 
    if (*head_ref == NULL) //Linked List is empty,then make the new node as head 
    {
        *head_ref = new_node;
        return;
    }
 
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

Node* insertfirst(int new_data , Node* head )
{
Node*new_node = new Node();  //aloocating node declaring ,intialisation of new_node
new_node->data = new_data;//storing new data to node's data
new_node -> next=head;   //next node as head
//head = new_node;
return new_node;
}
int main()
{
    Node *head = new Node(); // allocatibg node in heap USING NEW FOR NODE DATATYPE // HEAD OBJECT
    // Node *second = new Node();
    // Node *third = new Node();
    // head->data = 1;      // assign data in first node
    // head->next = second; // link 1st node with second node
    // second->data = 1;    // assign data in first node
    // second->next = third;
    // third->data = 1; // assign data in first node
    // third->next = NULL;
  head = insertfirst(1,head);
   head = insertfirst(2,head);
   head =  insertfirst(3,head);
   addlast(&head,89);
  traversal(head);
    return 0;
}