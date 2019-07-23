#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   Node *newNode;
   newNode = new Node();
   newNode->data = newData;
   newNode->next = head;
   head = newNode;
   return head;
}
// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   Node *last = head;
   while(last->next != NULL){
       last = last->next;
   }
   Node *newNode;
   newNode = new Node();
   newNode->data = newData;
   newNode->next = NULL;
   last->next = newNode;
   return head;
}


int main(){

}