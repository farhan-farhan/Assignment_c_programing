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
void print(node* &head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int getlen(node*head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
void findmiddle(node* &head){
    node* temp=head;
    int count=0;
    int len= (getlen(head)/2);

    while(count<len){
        temp=temp->next;
        count++;
    }
    cout<<"MIddle element is = " <<temp->data<<endl;
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

   findmiddle(head);



}