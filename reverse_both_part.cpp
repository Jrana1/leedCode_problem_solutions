// https://practice.geeksforgeeks.org/problems/bae68b4d6a2a77fb6bd459cf7447240919ebfbf5/1
// GFG daily challange
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
    Node(int val){

          this->val=val;
          this->next=NULL;
    }
};

Node *addNode(int val,Node *root){

      Node *newNode = new Node(val);
      if(root==NULL){

          root=newNode;
          return root;
      }
      Node *tmp=root;
      while (tmp->next)
      {
          tmp=tmp->next;
      }
      tmp->next=newNode;
      
      return root;

}

void show(Node *root){

    Node *tmp=root;
    while(tmp){
        cout<<tmp->val<<(tmp->next?"-->":"");
        tmp=tmp->next;
    }
    cout<<endl;
}

int count(Node *root){

    Node *tmp=root;
    int ans=0;
    while(tmp){
       ans++;
        tmp=tmp->next;
    }
  return ans;
}

int main(){


     Node *root=NULL;
     root = addNode(1,root);
     vector<int>nums={2,4,3};
     for(auto x:nums){
           addNode(x,root);
     }

//    show(root);

//    cout<<count(root)<<endl;
  int cnt = count(root);
  int *arr= new int[cnt];
  show(root);
  Node *tmp=root;
  int i=0;
  while(tmp){
     arr[i++]=tmp->val;
     tmp=tmp->next;
  }
  int k=3;
   
  int st=0;
  int end=k-1;
  while(st<end){

      swap(arr[st++],arr[end--]);
  }
  st=k;
  end=cnt-1;
  while(st<end){

      swap(arr[st++],arr[end--]);
  }
 for(int x=0;x<cnt;x++){
           cout<<arr[x]<<" ";
     }
     cout<<endl;
     delete []arr;
//      cou
// reverse(arr,arr+3);;
// reverse(arr+3,arr+sizeof(arr)/sizeof(arr[0]));
//  for(auto x:arr){
//            cout<<x<<" ";
//      }
//      cout<<endl;


    return 0;
}