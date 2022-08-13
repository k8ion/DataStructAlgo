bool isCircularList(Node* head){

//empty list
    if(head==NULL){
        return true;
    }


 // one node and multiple node ka first logic same rahega

    Node* temp = head -> next;
    while((temp != NUll) && (temp != head)){
        temp = temp -> next;
    }

    if(temp == NULL){
        return false;
    }

    if(temp == head){
        return true;
    }


}


int main() {


    Node* tail = NULL;
    insertNode(tail,5,4);
    print(tail);

    insertNode(tail,4,5);
    print(tail);


    if(isCircularList ) {
        cout<< "LL is Circular"<<endl;
    }

    else {
        cout<< "LL is Not Circular"<<endl;
    }
}

// Done in circular Linked list .cpp file 
 
 
 
 