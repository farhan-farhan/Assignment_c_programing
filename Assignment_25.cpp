

// Assignment - 25 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Classes and Objects
// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
/*#include<iostream>
using namespace std;

class complex{
    private:
     int real,img;
    public:
     void set(int r,int i){
        real=r;
        img=i;
     } 
    void print(){
        cout<<real<<" + "<<img<<"i";
    } 
};
int main(){
    complex c1;
    c1.set(2,5);
    c1.print();
return 0;    
}
*/
// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
/*#include<iostream>
using namespace std;
class Time{
    private:
     int HH,MM,SS;
    public: 
     void setTime(int h,int m,int s){
        HH=h;
        MM=m;
        SS=s;
    }
     void displayTime(){
        cout<<HH<<" hr "<<MM<<" min "<<SS<<" sec";
     }

};
int main(){
    Time t1;
    t1.setTime(1,30,15);
    t1.displayTime();
return 0;    
}
*/
// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
/*#include<iostream>
using namespace std;
class Factorial{
    private:
     int n,fact;
    public:
     void set(int num){
        n=num;
     }
     int get(){
        return n;
     }
     int getfact(){
        return fact;
     }
    void calculatfact(){
      int f=1;
        if(n<=0){
            fact=1;
           return; 
        }
       for(int i=1;i<=n;i++){
        f=f*i;
       }
       fact=f; 
     } 
};
int main(){
    Factorial f;
     f.set(5);
     f.calculatfact();
   cout<<"factorial "<<f.get() <<" is "<<f.getfact()<<endl;
return 0;    
}
*/
// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
/*#include<iostream>
using namespace std;
class Larger{
    private:
     int a,b,c,max;
    public:
     void setn(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    } 
    int getmax(){
        return max;
    }
    
     void calculateMax(){
        if(a>b && a>c){
            max=a;
        }
        else if(b>a&&b>c){
            max=b;
        }else{
            max=c;
        }
     }
};
int main(){
    Larger c1;
    c1.setn(5,7,9);
    c1.calculateMax();
    cout<<"Maximum value of a and b and c is "<<c1.getmax();
return 0;    
}
*/
// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
/*
#include<iostream>
using namespace std;
class Reverseumber{
    private:
     int n,rev;
    public:
    void set(int num){
        n=num;

    }
    int getN(){
        return n;
    }
    int getrev(){
        return rev;
    }
    void calculateRevers(){
         int rem,x=0;
         int t=n;
            while(t>0){
             rem=t%10;
             t=t/10;
             x=x*10+rem;
            }
            cout<<"is"<<x<<endl;
         rev=x;   
    }
};
int main(){
    Reverseumber r;
    r.set(123);
    r.calculateRevers();
    cout<<"Reverse of "<<r.getN()<<" is "<<r.getrev();
return 0;    
}
*/
// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
/*
#include<iostream>
using namespace std;
class Square{
    private:
     int x,sq;
     static int k;
    public:
    void set(int n){
        x=n;
    } 
    int getN(){
        return x;
    }
    int getSq(){
        return sq;
    }
    // static void setk(int z){k=z;}
     static  int getk(){return k;}
    
    void calculateSquare(){
        k++;
        sq=x*x;
    }
};
int Square::k=0;
int main(){
    Square a;
    a.set(4);
    a.calculateSquare();
    cout<<"Square of "<<a.getN()<<" is "<<a.getSq()<<endl;
    //   cout<<"k="<<Square::getk();

     cout<<"Running time of function is "<<Square::getk();
    //  complex::setk(4);
    //  cout<<"k="<<complex::getk();
return 0;    
}
*/
// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
/*
#include<iostream>
using namespace std;
class Greatest{
    private:
     int a,b,c,max;
    public:
    void set(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    } 
    
    int getmax(){
        return max;
    }
    
     void calculateMax(){
        if(a>b && a>c){
            max=a;
        }
        else if(b>a&&b>c){
            max=b;
        }else{
            max=c;
        }
     }
};
int main(){
    Greatest c1;
    c1.set(5,7,9);
    c1.calculateMax();
    cout<<"Maximum value of a and b and c is "<<c1.getmax();
return 0;    
}

*/
// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
/*#include<iostream>
using namespace std;
class Rectangle{
    private:
     int L,B,area;
    public:
     void set(int lenght,int Breath){
        L=lenght;
        B=Breath;
     } 
    // int getL(){
    //     return L;
    // } 
    // int getL(){
    //     return B;
    // } 
    int getAra(){
        return area;
    }  
    void calculateAraa(){
        area=L*B;
    } 
};
int main(){
    Rectangle r;
    r.set(3,6);
    r.calculateAraa();
    cout<<"Area of Rectangle is "<<r.getAra();
return 0;   
}
*/
// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
/*
#include<iostream>
using namespace std;
class Circle{
    private:
     int r,Area;
    public:
    void set(int radious){
        r=radious;
    }
    int getArea(){
        return Area;
    }
    void calculateArea(){
        Area=3.14*r*r;
     } 
};

int main(){
    Circle c1;
    c1.set(3);
    c1.calculateArea();
    cout<<"Area of Circul is "<<c1.getArea();
return 0;    
}
*/
// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
/*
#include<iostream>
using namespace std;
class Area{
    private:
    float r,l,b,side,Rectangle,Circul;
    public:
    void setLB(float y,float z){
        l=y;
        b=z;
    } 
    void setSide(float w){
        side=w;
    }
    void setRadious(float x){
        r=x;
    }
    // float getSquare(){
    //     return Square;
    // }
    float getRectangle(){
        return Rectangle;
    }
    float getCircul(){
        return Circul;
    }
    float calculateAofSquare(){
        return side*side;
    }
    void calculateAofRectangle(){
        Rectangle=l*b;
    }
    void calculateAofCircle(){
        Circul=3.14*r*r;    }
};
int main(){
    Area ae;
    ae.setRadious(3);
    ae.setLB(4,7);
    ae.setSide(6);
    ae.calculateAofSquare();
    ae.calculateAofRectangle();
    ae.calculateAofCircle();
    cout<<"Area of Rectangle is "<<ae.getRectangle()<<endl;
    cout<<"Area of Circle is "<<ae.getCircul()<<endl;
    cout<<"Area of Square is "<<ae.calculateAofSquare()<<endl;


}*/