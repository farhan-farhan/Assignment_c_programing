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

     int push(int element){
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
    int pop(){
        if(front==-1){// to check queue is empty
            cout<<"quee is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear){//single element is present
            front=rear=-1;
        }else if(front==size-1){//to maintain cyclic nature
            front=0;
        }else{
            front++;
        }
        return ans;
    }
};
int main(){
    queue q(4);
    q.push(5);
    q.push(7);
    q.push(9);
    // q.Display();
    cout<<" "<<q.pop();
    cout<<" "<<q.pop();
    cout<<" "<<q.pop();
    cout<<" "<<q.pop();
}