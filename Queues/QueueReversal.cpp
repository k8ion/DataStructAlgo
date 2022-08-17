//https://practice.geeksforgeeks.org/problems/queue-reversal/1
queue<int> rev(queue<int> q) 
{
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}