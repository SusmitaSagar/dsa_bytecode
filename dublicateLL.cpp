// C++ implementation of the approach
#include <iostream>
#include <unordered_set>
using namespace std;

// Representation of node
struct Node {
	int data;
	Node* next;
};


// Function to insert a node at the beginning
void insert(Node** head, int item)
{
	Node* temp = new Node();
	temp->data = item;
	temp->next = *head;
	*head = temp;
}

// Function to count the number of
// duplicate nodes in the linked list
int countNode(Node* head)
{
	int count = 0;

	while (head->next != NULL) {

		// Starting from the next node
		Node *ptr = head->next;
		while (ptr != NULL) {

			// If some duplicate node is found
			if (head->data == ptr->data) {
				count++;
				break;
			}
			ptr = ptr->next;
		}

		head = head->next;
	}

	// Return the count of duplicate nodes
	return count;
}

// Driver code
int main()
{
	Node* head = NULL;
	insert(&head, 5);
	insert(&head, 7);  // 5 two times repeat'
	insert(&head, 5);
	insert(&head, 1);
	insert(&head, 7);

	cout << countNode(head);

	return 0;
}
