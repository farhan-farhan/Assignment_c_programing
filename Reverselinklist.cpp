#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertAThead(node* &head,node* &tail,int d){
   if(head==NULL){
    node* temp=new node(d);
    head=temp;
    tail=temp;
   }else{
    node* temp=new node(d);
    temp->next=head;
    head =temp;
    }
}
void insertATtail(node* &tail,node* &head,int d){
    if(tail==NULL){
        node* temp=new node(d);
         tail=temp;
         head=temp;
    }else{
     node* temp=new node(d);
     tail->next=temp;
     tail=temp;
     }
}
void insertATpositon(node* &head,node* &tail,int position,int d){
    node* temp =head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodeToinsert=new node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
    if(position==1){
        insertAThead(head,tail,d);
        return;
     }   
}
void print(node* &head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

node* &reverseLIST(node* & head){
    if(head==NULL||head->next==NULL){return head;}
    node* prev=NULL;
    node* curr=head;
    node* forword=NULL;

    while(curr!=NULL){
        forword=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forword;
    }
    head=prev;
    return head;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    insertAThead(head,tail,5);
    // print(head);
    insertAThead(head,tail,10);
    // print(head);
    insertAThead(head,tail,18);
    // print(head);
    insertAThead(head,tail,20);
    // print(head);
    insertAThead(head,tail,25);
    insertAThead(head,tail,66);
    insertAThead(head,tail,86);

   print(head);

   reverseLIST(head);
   print(head);




}