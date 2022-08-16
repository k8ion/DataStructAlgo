//You are having a stack "ARR" of size 'N+1', 
//your task is to delete the middlemost element so that the size of resulting stack is 'N'.
//https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0
void solve(stack<int>&inputStack, int count , int size ){
    
    //base  case
    if(count == size/2) {
        inputStack.pop();
        return;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
    //recrsive call
    solve( inputStack, count+1, size);
    inputStack.push(num);
    
    }


void deleteMiddle(stack<int>&inputStack, int N){
    
    
    int count = 0;
    solve (inputStack , count , N);
}