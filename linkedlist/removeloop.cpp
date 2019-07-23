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

void removeTheLoop(Node *head){
    Node *one = head;
    Node *two = head;
    bool loop = false;
    while(one->next != NULL && two->next != NULL){
        one = one->next;
        two = two->next->next;
        if(one == two){
            loop = true;
            break;
        }
    }
    if(loop){
        vector<Node*> v;
        Node *head_ref = head;
        while(head_ref->next != NULL){
            v.push_back(head_ref);
            head_ref = head_ref->next;
            for(int i=0; i<v.size(); i++){
                if(head_ref == v[i]){
                    head_ref = *v.end();
                    head_ref->next = NULL;
                    break;
                }
            }
        }
    }
}

int main(){

    return 0;
}