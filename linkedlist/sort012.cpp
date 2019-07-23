#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node* segregate(Node *head) {
    Node *temp = head;
    int arr[3];
    memset(arr, 0, sizeof(arr));
    while(temp!=NULL){
        if(temp->data == 0) arr[0]++;
        if(temp->data == 1) arr[1]++;
        if(temp->data == 2) arr[2]++;
        temp = temp->next;
    }
    Node *temp1 = head;
    while(temp1 != NULL && arr[0] != 0){
        temp1->data = 0;
        arr[0]--;
        temp1 = temp1->next;
    }
    while(temp1 != NULL && arr[1] != 0){
        temp1->data = 1;
        arr[1]--;
        temp1 = temp1->next;
    }
    while(temp1 != NULL && arr[2] != 0){
        temp1->data = 2;
        arr[2]--;
        temp1 = temp1->next;
    }

    return head;
}

int main(){
    int t;
    cin>>t;
    while(t--){

    }
    return 0;
}