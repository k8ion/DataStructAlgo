You are given two sorted linked lists. You have to merge them to produce a combined sorted linked list. You need to return the head of the final linked list.
Note:
The given linked lists may or may not be null.
For example:
If the first list is: 1 -> 4 -> 5 -> NULL and the second list is: 2 -> 3 -> 5 -> NULL

The final list would be: 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL
Input Format:
The first line of input contains an integer 'T' representing the number of test cases or queries to be processed. Then the test case follows.

The first line of each test case contains the elements of the first linked list separated by a single space and terminated by -1. Hence, -1 would never be a list element.

The second line of each test case contains the elements of the second linked list separated by a single space and terminated by -1.
Output Format:
For each test case, print the final linked list. The elements of the linked list must be separated by a single space and terminated by -1.

Print output of each test case in a separate line.
Note:
You are not required to print the expected output, it has already been taken care of. Just implement the function.
Constraints:
1 <= T <= 10
1 <= L <= 10^5
1 ≤ data ≤ 10^6 and data != -1

Where L is the number of nodes in either of the two Linked List.

Time Limit: 1 sec 
Follow-up:
Try to solve this problem in linear time complexity and constant space complexity.
Sample Input 1:
2
1 4 5 -1
2 3 5 -1
7 8 -1
1 3 4 6 -1
Sample Output 1:
1 2 3 4 5 5 -1
1 3 4 6 7 8 -1
Explanation Of Input 1:
The first test case is already explained in the problem statement.

The second test case, the first list is: 7 -> 8 -> NULL
The second list is: 1 -> 3 -> 4 -> 6 -> NULL
The final list would be: 1 -> 3 -> 4 -> 6 -> 7 -> 8 -> NULL
Sample Input 2:
2
5 -1
1 3 6 10 -1
1 1 1 -1
1 1 1 -1
Sample Output 2
1 3 5 6 10 -1
1 1 1 1 1 1 -1




/********************************
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

********************************/
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

void solve(Node<int>* first, Node<int>* second) {
    
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            
        }
        
        
    }
    
    
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        solve(first, second);
    }
    else
    {
        solve(second, first);
    }
    
    
}