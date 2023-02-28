//https://leetcode.com/problems/minimum-distance-between-bst-nodes/solutions/

#include<bits/stdc++.h>
using namespace std;
struct Node{

   int val;
   Node*left;
   Node*right;
   Node(int val){
         this->val=val;
         this->left=NULL;
         this->right=NULL;
   }

};

void inorder(Node *root,int curr,int &mn){

       if(root==NULL){
        return;
       }
       inorder(root->left);
     
        curr=root->val-curr;

       inorder(root->right);
}

using namespace std;

int main(){
    

         Node *root=new Node(4);
         Node *n1=new Node(2);
         Node *n2=new Node(6);
         Node *n3=new Node(1);
         Node *n4=new Node(3);
         root->left=n1;
         root->right=n2;
         n1->left=n3;
         n1->right=n4;
      int curr = 0;
      inorder(root,curr,INT_MAX);
      cout<<mn<<endl;


    return 0;
}