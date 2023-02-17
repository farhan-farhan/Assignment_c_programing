#include<iostream>
using namespace std;
class stack{
    public:
     int top;
     int* arr;
     int  size;
     stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

     }

    void push(int element){
        if(size-top>1){
            top++;
            arr[element];
        }else{
            cout<<"Stack is overFlow";
        }
    } 
    void pop(){
        if(top>=0){
            top--;

        }else {
            cout<<"stack is underFlow";
        }
    }
    bool is_Empty(){
        if(top==-1)
         return true;
        return false; 
    }
    int topElment(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Stack is Empty"<<endl;
           return -1;

        } 
    }
};
int main(){
    stack st(5);
    st.push(2);
    st.push(4);
    // st.push(5);
    // st.push(7);
    // st.push(9);
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    
    // st.push(11);
    // if(st.is_Empty()){
    //     cout<<"stack is Empty";
    // }else{
    //     cout<<"stack is not Empty";
    // }
    cout<<"Top Element Is ="<<st.topElment()<<endl;

}