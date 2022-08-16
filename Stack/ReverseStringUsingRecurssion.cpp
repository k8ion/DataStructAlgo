//https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
void insertAtbottom( stack<int> &s , int element) {
    //basecase
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    
    //recursivecall
    insertAtbottom(s,element);
    s.push(num);
}


void reverseStack(stack<int> &stack) {
    //basecase 
    if (stack.empty()){
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtbottom(stack ,num);
}