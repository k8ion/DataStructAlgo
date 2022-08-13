You are given a linked list having N number of nodes and each node will have an integer which can be 0, 1, or 2. You have to sort the given linked list in ascending order.
For Example:
Let the linked list be 1→0→2→1→2. 
The sorted linked list for the given linked list will be 0→1→1→2→2.
Input Format:
The first line of input contains an integer ‘T’, denoting the number of test cases.

The first and only line of each test case will have space-separated integers denoting the elements of the linked list and terminated by -1. Hence, -1 would never be a list element.
Output Format :
For each test case, the sorted linked lists will be printed in separate lines.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Follow Up:
Can you solve this without updating the Nodes of the given linked list?
Constraints:
1 <= T <= 10
2 <= N <= 10000
0 <= node data <= 2

where ‘T’ is the total number of test cases, ‘N’ is the total number of nodes in the list and ‘node data’ is the value of nodes of the list. 

Time limit: 1 sec
Sample Input 1:
2
1 0 2 1 2 -1
0 0 1 2 -1
Sample Output 1:
0 1 1 2 2 -1
0 0 1 2 -1
Explanation Of Sample Input 1:
For the 1st test case:
The smallest element is 0, followed by 1, 1, 2 and 2. Hence the linkedlist returned should be 0->1->1->2->2.

For the 2st test case:
The smallest element is 0, followed by 0, 1, and 2. Hence the linkedlist returned should be 0->0->1->2.
Sample Input 2:
2
2 2 1 0 0 0 -1
1 1 1 1 -1
Sample Output 2:
0 0 0 1 2 2 -1
1 1 1 1 -1




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

//APPROACH 1

Node* sortList(Node *head)
{
    int oneCount = 0;
    int twoCount = 0;
    int zeroCount = 0;
    
    Node* temp = head;
    while( temp != NULL) {
        
        if (temp ->data == 0){
            zeroCount++;
        }
         
        else if (temp ->data == 1){
            oneCount++;
        }
        
        else if (temp ->data == 2){
            twoCount++;
        }
        temp = temp ->next;
        
    }
    
    temp = head;
    
    while(temp !=NULL) {
        
        if(zeroCount != 0) {
            temp ->data = 0;
            zeroCount -- ;
        }
        
        else if(oneCount != 0) {
            temp ->data = 1;
            oneCount -- ;
        }
        
        else if(twoCount != 0) {
            temp ->data = 2;
            twoCount -- ;
        }
        
         temp = temp ->next;

    }
    return head;

}



//APPROACH 2


void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}