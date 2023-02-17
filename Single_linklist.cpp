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
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
            cout<<"memory free for node"<<value;
        }
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
void deletATpositon(node* &head,int position){
   
    if(position==1){
        node*curr=head;
        head=head->next;;
        curr->next=NULL;
        delete curr;
    }else{
     node* curr =head;
     node* prev =NULL;
     int cnt=1;
     while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
     }
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;
    }   
}
void print(node* &head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    // node* node1=new node(10);
    // node* head=node1;
    // node* tail=node1; 
    node* head=NULL;
    node* tail=NULL;

    print(head);

    cout<<"Insert at head"<<endl;
    insertAThead(head,tail,20);
    print(head);
    insertAThead(head,tail,42);
    print(head);

    cout<<"insert at tail"<<endl;
    insertATtail(tail,head,60);
    print(head);
    insertATtail(tail,head,80);
    print(head);

    insertATpositon(head,tail,1,89);
    print(head);

    insertATpositon(head,tail,3,99);
    print(head);

    deletATpositon(head,4);
    print(head);

}