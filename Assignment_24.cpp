// Assignment - 24 Job Ready Bootcamp in C++, DSA and IOT MySirG
// Functions in C++

// 1. Define a function to check whether a given number is a Prime number or not.
/*#include<iostream>
using namespace std;
int main(){
    int a,i,flag=0;
    cout<<"Enter the no :"<<endl;
    cin>>a;
    for(i=2;i<5;i++){
        if(a%i==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"not a prinme no";

    }else
      cout<<"prime no";
return 0;    
}*/
// 2. Define a function to find the highest value digit in a given number.
/*
#include<iostream>
using namespace std;

int maxx(int a[],int size){
    int max,i;
    for(i=0;i<size;i++){
        if(a[i]>a[i+1]){
            max=a[i];
        }
    }
    return max;
}
int main(){
    int a[10]={2,5,7,8,5,8,9,4,23};
    cout<<"maxium no is:"<<maxx(a,10)<<endl;

return 0;    
}
*/
// 3. Define a function to calculate x raised to the power y.
/*
#include<iostream>
using namespace std;

int pow(int x,int y){
    int p=1,i;
    for(i=1;i<=y;i++){
        p=p*x;
    }
    return p;
}

int main(){
int x,y;   
cout<<"Enter the value of x and y"; 
cin>>x>>y;  
cout<<"The value of x " <<x<< " and y is " <<y<<endl; 
cout<<"x raised to the power y is "<<pow(x,y)<<endl;
return 0;    
}*/
// 4. Define a function to print Pascal Triangle up to N lines.
/*#include<iostream>
using namespace std;

void pascal(int);
int fact(int) ;  
int combination(int,int);    
int main(){
      int l; 
      cout<<"Enter the value of Pascal Traingle :";
      cin>>l;
       pascal(l);
return 0;   
}    
void pascal(int n){
    int i,j,s;
    for(i=0;i<=n;i++){
        for(s=1;s<=n-i;s++)
           cout<<" ";
        for(j=0;j<=i;j++){
           
            cout<<" "<<combination(i,j);
        }
        cout<<"\n";
    }
}
int combination(int a,int b){
        return fact(a)/(fact(b)*fact(a-b));
}
int fact(int x){
    int fact=1,i;
    for(i=1;i<=x;i++)
     fact=fact*i;
   return fact;  
    }

*/
// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
/*
#include<iostream>
using namespace std;

int NtermFibonacci(int);
int main(){

int a;
cout<<"Enter the value of N";
cin>>a;
cout<<NtermFibonacci(a);
}

NtermFibonacci(int n){

int f1=1,f2=1,temp;
if(n<=2)
 return 1;
for(int i=3;i<=n;i++)
{
   temp=f1+f2;
   f1=f2;
   f2=temp;
}  
return f2;    
}
*/
// 6. Define a function to swap data of two int variables using call by reference
/*#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
int a=10,b=20;
swap(a,b);
cout<<"a= "<<a<<" b= "<<b;
return 0;    
}
*/
// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
/*#include<iostream>
using namespace std;
int add(int=0,int=0,int=0);

int add(int a,int b,int c){
    return a+b+c;
}

int main(){
    int a,b;
    cout<<"Enter the value of A and B:"<<endl;
    cin>>a>>b;
    cout<<"addition two :"<<add(a,b);
    int c;
    cout<<endl<<"Enter the value of A and B C:"<<endl;
    cin>>a>>b>>c;
    cout<<"addition three :"<<add(a,b,c);
return 0;    
}*/
// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
/*#include<iostream>
using namespace std;
float area(float r){
    
    return 3.14*r*r;

}
int area(int l,int w){
    return l*w;

}
float area(float le,float b){
    
    return 0.5*le*b;

}

int main(){
    float r;
    cout<<"area of circul is:"<<endl;
    cin>>r;
    cout<<area(r)<<endl;

    int l,w;
    cout<<"area of rectangle is:"<<endl;
    cin>>l>>w;
    cout<<area(l,w)<<endl;

    float b,h;
    cout<<"area of traingle is:"<<endl;
    cin>>b>>h;
    cout<<area(b,h);

return 0;   
}
*/
// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
/*
#include<iostream>
using namespace std;

int max(int a ,int b){
if(a>b)
 return a;
 else
  return b; 
}

float max(float a, float b){
if(a>b)
 return a;
else 
  return b; 
}

int main(){
int x,y;
float u,v;
cout<<"Enter the value of x and y"<<endl;
cin>>x>>y;
cout<<max(x,y);
cout<<"Enter the value of u and v"<<endl;
cin>>u>>v;
cout<<max(u,v);
return 0; 
}
*/
// 10. Write functions using function overloading to add two numbers having different data
// types.
/*#include<iostream>
using namespace std;
int add(int x=0,int y=0){
    return x+y;
}
int add(float x=0,float y=0){
    return x+y;
}
int main(){
    int x,y;
    float u,v;
    cout<<"Enter two value of x and y"<<endl;
    cin>>x>>y;
    cout<<add(x,y);
    cout<<"Enter two value of u and v"<<endl;
    cin>>u>>v;
    cout<<add(u,v);
    return 0;
}*/