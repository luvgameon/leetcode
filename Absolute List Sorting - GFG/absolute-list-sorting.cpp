//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	Node* next;
	int data;
};

// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data;
		if (head->next != NULL)
			cout << " ";
		head = head->next;
	}
	cout << endl;
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
         // Your Code Here
        Node* h1 = NULL;
        Node* h2 = NULL;
        Node* t1 = NULL;
        Node* t2 = NULL;
        Node* ptr = head;
        Node* nx = ptr->next;
        while(ptr){
            if(ptr->data >= 0){
                if(t1 == NULL){
                    h1 = t1 = ptr;
                }else{
                    t1->next=ptr;
                    t1=ptr;
                }
            }else{
                if(t2==NULL){
                    h2=t2=ptr;
                }else{
                    ptr->next=h2;
                    h2=ptr;
                }
            }
            ptr = nx;
            if(ptr) nx = ptr->next;
        }
        if(t2 == NULL){
            t1->next=NULL;
            return h1;
        }
        if(t1 == NULL){
            t2->next = NULL;
            return h2;
        }
        t2->next=h1;
        t1->next=NULL;
        return h2;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{

	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			// push(&head, a);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		// printList(head);
		
		Solution ob;
		head=ob.sortList(head);

		printList(head);

	}
	return 0;
}

// } Driver Code Ends