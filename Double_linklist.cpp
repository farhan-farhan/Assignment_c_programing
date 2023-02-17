#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node* prev;
     node* next;
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    } 
};
void insertAThead(node* &head,node* &tail,int d){
    if(head==NULL){
        node*temp=new node(d);
        head=temp;
        tail=temp;
    }else{
     node* temp=new node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;
    }
    
    // node* temp=new node(d);
    // temp->next=head;
    // head->prev=temp;
    // head=temp;

}
void insertATtail(node* &tail,node* & head,int d){
    if(tail==NULL){
        node*temp=new node(d);
        tail=temp;
        head=temp;
    }else{
     node* temp = new node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
     }
    //  node* temp = new node(d);
    //  tail->next=temp;
    //  temp->prev=tail;
    //  tail=temp;
}
void insertATPosition(node* &head,node* &tail,int position,int d){
    int cnt=1;
    node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoInsert =new node(d);
    nodetoInsert->next=temp->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;

    if(position==1){
        insertAThead(head,tail,d);
        return;
    }
    
}
void deletAtposition(node* &head,int position){
    if(position==1){
        node* temp=head;
        head=head->next;
        temp=NULL;
        delete temp;
    }else{
        int cnt=1;
        node* curr=head;
        node* prev=NULL;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next->prev=prev;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}


void print(node* head){
    node* temp=head;
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


    insertAThead(head,tail,8);
    print(head);
    insertAThead(head,tail,78);
    print(head);  
    
   insertATtail(tail,head,80);
    print(head);

//    insertATPosition(head,tail,3,55);
//    print(head);

//    deletAtposition(head,2);
    // print(head);

//    cout<<"head "<<head->data<<endl;
//    cout<<"tail "<<tail->data<<endl;   

}