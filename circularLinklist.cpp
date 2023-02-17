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
        int value =this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"delete "<<value<<endl;
     }
};


void insertatTail(node* &head,int d){
    if(head==NULL){
        node* temp= new node(d);
        temp->next=temp;
        head=temp;

    }
    else{
        node* temp= new node(d);
        node* curr=head;

        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        
    }
}
void insertathead(node* &head,int d){
    if(head==NULL){
      insertatTail(head,d);
      return;
    }
    else{
        node* temp= new node(d);
        node* curr=head;

        while(curr->next!=head){
            curr=curr->next;
        }
        temp->next=head;
        curr->next=temp;
        head=temp;
        
    }
}

void deleten(node* &head,int value){
    if(head==NULL){
        cout<<"no node is exist heare"<<endl;
        return;
    }else{
    node* prev=head;
    node* curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;

    if(curr==prev){
        head=NULL;
    }
    //>=2 node ke liye
    else if(head==curr){// starting node 
        head=curr->next;
    }

    curr->next=NULL;
    delete curr;
    }
}
void print(node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node* temp=head;

    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head!=temp);
    cout<<endl;
}
bool isCircularOrnot(node* head){
    if(head==NULL){
        return false;
    }else{
        node*temp=head->next;
        while(temp!=NULL && temp!=head){
            temp=temp->next;

        }
        if(temp==head)
         return true;
        return false; 
    }   
}
int main(){
    node* head=NULL;
    // print(head);

    
    insertathead(head,8);
    print(head);

    insertatTail(head,6);
    print(head);
    // insertatTail(head,13);
    // print(head);
    // insertatTail(head,17);
    // print(head);

    // insertathead(head,7);
    // print(head);
    // insertathead(head,5);
    // print(head);

//    deleten(head,8);
    // print(head);
    if(isCircularOrnot(head)==true){
        cout<<"list is circular";
    }else {
        cout<<"list is not circular";
    }


}