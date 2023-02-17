#include<iostream>
using namespace std;
class queue{
    public:
     int rear;
     int front;
     int *arr;
     int size;
     queue(int size){
        this->size=size;
        arr=new int[size];
        rear=front=-1;
     }  

     
     int push_back(int element){
        if((rear==front) && (rear==size-1) && (rear==(front-1)%(size-1))){// to check weather q is full
            cout<<"queue is full";
            return -1;
        }else if(front==-1){//first element to push
            front=rear=0;
            // arr[rear]=element;
        }else if(rear==size-1 && front!=0){//to maintain cyclic nature
               rear=0;
            // arr[rear]=element;
            }else{//normal flow
                rear++;
                // arr[rear]=element;
            }
            arr[rear]=element;//push inside of queue
            return true;
     }


     int push_front(int element){
        if((front==0 && (rear==size-1) )&& (rear=(front-1)%(size-1))){// to check weather q is full
            cout<<"queue is full";
            return -1;
        }else if(front==-1){//first element to push
            front=rear=0;
            
            
        }else if(front==0){
             front=size-1;//to maintain cyclic nature
            }else{//normal flow
                front--;
            }
            arr[front]=element;//push inside of queue
            // return arr[front];
            return true;
     }

    int pop_front(){
        if(front==-1){// to check queue is empty
            cout<<"quee is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){//single element is present
            front=rear=-1;
        }else if(front==size-1){
            front=0;//to maintain cyclic nature
        }else{
            front++;
        }
        return ans;
    }
    int pop_back(){//pop_rear()
        if(front==-1&&rear==-1){// to check queue is empty
            cout<<"quee is empty";
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){//single element is present
            front=rear=-1;
        }else if(rear==0){
            rear==size-1;//to maintain cyclic nature
        }else{
            rear--;
        }
        return ans;
    }
    
    
};
int main(){
    queue q(10);
   q.push_back(6);
   q.push_back(8);
   q.push_back(9);
//    q.push_front(10);
//    q.push_front(15);
//    q.push_front(165);
//    q.push_front(30);
//    q.pop_front();
//    q.Display();
   
    // cout<<" "<<q.pop_front();
    // cout<<" "<<q.pop_front();
     cout<<" "<<q.pop_back();
    cout<<" "<<q.pop_back();
}