/*create linked with iterative method*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data; // integer type
    Node* next; // Node type pointer
};

//method to push the data in linkedList
//Node** -> pointer to pointer
void insert(Node** head_ref, int new_data){
    //initialize
    Node* new_node = new Node();
    
    //assign data
    new_node->data = new_data;
    
    //linked with old data
    new_node->next = (*head_ref);
    
    //head move to the new_node
    
    (*head_ref) = new_node;
    
}

//method to count the number of nodes in a Linkedlist with the head of the list
int countNode(Node* head){
    if(head == NULL){
      return 0;
    }else{
      return 1 + countNode(head->next);
    }
}

//main method
int main(){
    cout << "***********Count the nodes in LinkedList***********";
    //initialize empty linked list
    Node* head = NULL;
    
    //push the data 1->3->5->7
    insert(&head, 1);
    insert(&head, 3);
    insert(&head, 5);
    insert(&head, 7);
    
    //count nodes
    cout<<"\n Number of nodes current LinkedList Have is : "<< countNode(head);
    return 0;
}
