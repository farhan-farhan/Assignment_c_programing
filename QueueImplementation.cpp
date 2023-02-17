#include<iostream>
using namespace std;
class queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int element){//enqueue
        if(rear==size&&front==0){// full to nahi hai
           cout<<"Queue is full";
        }else if(front==-1){
            front=rear=0;
        }
        else{
            rear++;

        }
            arr[rear]=element;

    }
    int pop(){//dequeue
        if(front==rear){//empty to nahi hai
            cout<<"empty Queue";
            return -1;

        }
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==0&&rear==0){//yadi queue empty ho chuki hai to
                front=-1;
                rear=-1;
            }
            return ans;
        
    }
    
    
};
int main(){
    queue q(10);

     q.push(2);
     q.push(6);
     q.push(9);
     q.push(10);
     q.push(18);
    //  q.Display();

     cout<<"  pop element is:"<<q.pop()<<endl;
     cout<<"  pop element is:"<<q.pop()<<endl;
     cout<<"  pop element is:"<<q.pop()<<endl;
     cout<<"  pop element is:"<<q.pop()<<endl;
    //  cout<<"  pop element is:"<<q.pop()<<endl;
    //  cout<<"  pop element is:"<<q.pop()<<endl;
    // //  q.pop();
    //  q.Display();

    
    // if(q.isEmpty()==true){
    //     cout<<"queue is empty";
    // }else{cout<<"f";}




}