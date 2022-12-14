Problem Statement

You are given a linked list of 'N' nodes and an integer 'K'. 
You have to reverse the given linked list in groups of size K i.e 
if the list contains x nodes numbered from 1 to x, then you need to reverse each of the groups (1,K),(K+1,2*K), 
and so on.
For example, if the list is [1, 2, 3, 4, 5, 6] and K = 2, then the new list will be [2, 1, 4, 3, 6, 5].
Note:
1. In case the number of elements in the last cannot be evenly divided into groups of size k,
 then just reverse the last group(with any size). For example if the list is 1 2 3 4 5 and K = 3, 
 then the answer would be 3 2 1 5 4.

2. All the node values will be distinct.
Input Format:
The first line of input contains an integer 'T' representing the number of test cases.
 Then T test cases follow.

The first line of each test case contains a Linked list whose elements are separated by space and 
the linked list is terminated by -1.

The second line of each test case contains an integer K.
Output Format:
 For each test case print the elements of  modified linked list separated by space..

The output of each test case will be printed in a separate line.
Note:
You don’t need to print anything. It has already been taken care of. Just implement the given function.


Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}
   





//    Node* kReverse(Node* head, int k) {
//     // base case 
//     if(head==NULL){
//         return NULL;
//     } 
//     // step 1: reverse 1st k nodes
//      Node*next==NULL ;
//      Node*curr==head ;
//      Node*prev==NULL ;
//      int count =0;
    
//     while (curr != NULL && count<k){
//         next = curr->next ;
//         curr -> next = prev ;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     // step 2 : recurssion dekh lega
//     if (next!= NULL){
//         head -> next = kReverse(next,k);
//     }
//      //step3: return head of reversed list
//      return prev;
// }