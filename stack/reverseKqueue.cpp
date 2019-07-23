//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    int stack[k];
    int size = q.size();
    for(int i=0; i<k; i++){
        stack[i] = q.front();
        q.pop();
    }

    queue<ll> qq;
    for(int i=0; i<size; i++){
        if(i<k){
            qq.push(stack[k-i-1]);
        }else{
            qq.push(q.front());
            q.pop();
        }
    }
        return qq;
}