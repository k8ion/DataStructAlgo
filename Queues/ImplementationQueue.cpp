//  QUEUE - https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0
// DEQUEUE - https://www.codingninjas.com/codestudio/problems/deque_1170059?leftPanelTab=0
#include<iostream>
#include<queue>
using namespace std;
int main (){
    
     //create a queue and do operations onn it.
      
       queue <int> q;
        q.push(11);

        cout<<"front of queue is : "<<q.front()<<endl;

        q.push(15);

        cout<<"front of queue is : "<<q.front()<<endl;
        
        q.push(16);

        cout<<"front of queue is : "<<q.front()<<endl;

        cout<<"size is - "<< q.size()<< endl;
        
        q.pop();
        q.pop();
        q.pop();

        cout<<"size is - "<< q.size()<< endl;
       
        
        if(q.empty()){

            cout<<" Queue is emoty"<<endl;

        }
        else{
            cout<<"Queue is not empty"<<endl;
        }
        







    return 0;
}