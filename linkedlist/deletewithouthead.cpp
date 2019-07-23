#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void delete(Node *node){
    Node *prev = node;
    while(prev->next->next != NULL) prev = prev->next; //second last node
    while(node->next != NULL){
      node->data = node->next->data;
      node = node->next;
    }
    prev->next = NULL; //deattach last node
    return;
}

int main(){

    return 0;
}