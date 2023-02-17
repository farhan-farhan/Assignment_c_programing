#include<iostream>
using namespace std;

/*class Tree{
    public:
     int a[20];
     int size =20;
     void insert(int v,int i){
        if(i==1){a[i]=v;}
        else if(a[i/2]!=0&&i<size){
            a[i]=v;
        }else{
            cout<<"parent not exit";
        }
     }
     void insetLeft(int v,int i){
        if(a[i]!=0&&(2*i)<size){
            a[2*i]=v;
        }else{
            cout<<"parent not exit";
        }
     }
     void insetrRight(int v,int i){
         if(a[i]!=0&&(2*i)>size){
            a[2*i+1]=v;
        }else{
            cout<<"parent not exit";
        }
     }
     void print(){
        int i;
        for(i=1;i<size;i++){
            if(a[i]!=0)
            cout<<a[i]<<" ";
            else 
              cout<<"-";
        }
     }
     void delet(int i){
        if(a[i]!=0&&a[2*i+1]==0){
            a[i]=0;
        }else{
            cout<<" parent not exit";
        }
     }
};
int main(){
    Tree t;
    t.insert(5,1);
    t.insert(10,2);
    t.insert(20,5);
    t.insert(30,10);
    t.insert(40,21);
    t.print();
   return 0; 
}*/
#include<queue>
#include<bits/stdc++.h>
class node{
    public:
    int data;
    node* left;
    node* Right;
    node(int v){
        data =v;
        left =NULL;
        Right=NULL;
    }
    void preeOrder(){
      if(this!=NULL){
        cout<<data;
        left->preeOrder();
        Right->preeOrder();
      }
      }
    void postOrder(){
      if(this!=NULL){
        left->postOrder();
        Right->postOrder();
        cout<<data;

      } } 
     void inOrder(){
      if(this!=NULL){
        left->inOrder();
        cout<<data;
        Right->inOrder();
      }    
}
// void preeOrder(node* root){
//     if(root!=NULL){
//         cout<<root->data;
//         preeOrder(root->left);
//         preeOrder(root->Right);
//     }
// }
//LEVEL ORDER
//recursiv code
void levelOrder(node* root){
    int h=height(root);
    for(int i;i<h;i++){
        printCurrentlevel(root,i);
    }
}
void printCurrentlevel(node* root,int level){
    if(root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
    }else if(level>1){
        printCurrentlevel(root->left,level-1);
        printCurrentlevel(root->Right,level-1);

    }
}
//non recursive

/*void levelOrder(node* root){
    if(root==NULL){
      return;
    }
    queue<node*> q;
    q.push(root);//root value
    while(q.empty()==false){
        node*temp=q.front();
        cout<<temp->data;
        q.pop();

        if(temp->left!=NULL){
            q.push(node->left);

        }
         if(temp->Right!=NULL){
            q.push(node->Right);

        }
    }
    
}*/
int height(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        int Lhight=height(root->left);
        int Rhight=height(root->Right);
        if(Lhight>Rhight){
            return Lhight+1;
        }else{
            return Rhight+1;
        }
    }
}
};
node* inorderSuccessor(node* node){
    return min_element(node->right);
}
node* inorderPrecessor(node* node){
    return min_element(node->left);
}
node* search(node* root ,int key){}
int main(){// this is for testing function
    node *root=new node(5);
    root->left=new node(4);
    root->Right=new node(5);
    root->left->Right =new node(6);
    root->Right->left=new node(7);

    // root->left->Right->left =new node(8);
    // root->Right->left=new node(11);
}