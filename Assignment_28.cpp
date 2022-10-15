// Assignment - 28 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Operator Overloading, friend operator and this pointers
// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
/*#include<iostream>
using namespace std;
class complex{
    private:
     int age;
    public:
    //  void input(){
    //     cout<<"Enter the age of man";
    //     cin>>age;
    //  }
    friend ostream& operator<<(ostream &os,complex c);
    friend istream& operator>>(istream &ci,complex c);
};
ostream& operator<<(ostream &os,complex c){
    
        os<<c.age;
        return os;
     }
istream& operator>>(istream &ci,complex c){
     cout<<"Enter The age:";
     ci>>c.age;
     return ci;
    }
     
int main(){
    complex c,c1;

    // c.input();
    cin>>c>>c1;
    cout<<c<<c1;
return 0;    
}
*/
// 2. Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables.
/*
#include<iostream>
using namespace std;

class complex{
    private:
     int real;
     int img;
    public:
    complex(){}
    complex(int real,int img){this->real = real;this->img = img;}
    void setData(int real,int img){
        this->real =real;
        this->img = img;
    }
    complex &operator=(complex &c){
        this->real=c.real;
        this->img =c.img;
        return *this;
    }
    friend ostream& operator<<(ostream &os,complex c);
    friend istream& operator>>(istream &ci,complex c);
};
ostream& operator<<(ostream &os,complex c){
    
        os<<"real = "<<c.real<<"img = "<<c.img<<endl;
        return os;
     }
istream& operator>>(istream &ci,complex c){
     cout<<"Enter The real and img value:";
     ci>>c.real>>c.img;
     return ci;
    }
     
int main(){
    complex c1(3,4),c2;

    c2.setData(2,4);
    // cin>>c>>c1;
    cout<<c1<<c2;
return 0;    
}


*/
// 3. Overload subscript operator [] that will be useful when we want to check for an index
// out of bound.
/*#include<iostream>
using namespace std;
class over{
    private:
     int a[100];
     const int size =100;

    public:
    over(){}
    void setData(int n,int index){
        if(index>=size){
            cout<<"Execption out of Bound"<<endl;
            exit(0);
        }
        a[index] = n;
    }
    void display(int index){
        cout<<a[index];
    }
    int operator[](int index){
        if(index>=size){
            cout<<"Array Index out of Bound Exception"<<endl;
            exit(0);
        }
        return a[index];
        }
       
};
int main(){
    over ob;
    // ob.setData(3,110);
    ob.setData(3,90);
    // ob.display(10);
    // ob.display(90);
    // cout<<ob[150];//Array index out of bound Exception
    cout<<ob[90];

return 0;    
}
*/
// 4. Create a student class and overload new and delete operators as a member function
// of the class.
// 5. Create a student class and overload new and delete operators outside the class.
// 6. Create a complex class and overload assignment operator for that class.
/*
#include<iostream>
using namespace std;
class Complex{
    private:
     int a;
     int b;
    public:
    void  setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
    Complex &operator=(Complex &c){
        this->a=c.a;
        this->b=c.b;
        return *this;

    }
};
int main(){
    Complex c1;
    Complex c2;
    Complex c3;
    c1.setData(4,5);
    // c2.setData(5);
    c3=c2=c1;//bina operatorke bhee chal jati lekin yaha deep copy ho rahi hai
    c2.display();

return 0;    
}//why
*/
// 7. Create an Integer class and overload logical not operator for that class.
/*#include<iostream>
using namespace std;
class Integer{
    private:
     int i;
     public:
      Integer(int i):i(i){}
        int operator!(){
            return -i;
        }
      
};
int main(){
    Integer x(10);
    cout<<!x;
    return 0;
}*/
// class Integer{
//     private:
//     char str[25];
//     public:
//     void input(){
//         cin>>str;

//     }
//     void display(){
//         cout<<str;
//     }
//      void operator!(){
//      for(int i=0;str[i];i++){
//         if(str[i]<=90 && str[i]>=65){
//             str[i] = str[i]+32;
//         }
//         else if(str[i]>=97 && str[i]<=122){
//             str[i] = str[i]-32;
//         }
//       }
//       cout<<"\n\n Reverse Case string is :"<<str;
//      }   
// };
// int main(){
//     Integer i;
//     cout<<"Enter the value of string"<<endl;
//     i.input();
//     cout<<"output strirng is:"<<endl;
//     i.display();
//     !i;
// return 0;    
// }

// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
// c3 are objects of 3D coordinate class.
/*
#include<iostream>
using namespace std;
class Coordinate{
    private:
     int x,y,z;
    public:
     Coordinate(){}
     Coordinate(int a,int b ,int c){
        x=a;
        y=b;
        z=c;
     }
     Coordinate operator,(Coordinate c){
        Coordinate t;
        t.x=c.z;
        t.y=c.y;
        t.z = c.x;
        return t;
     }
     void display(){
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z;
    } 
};
int main(){
    Coordinate c1(1,2,3),c2(4,5,6),c3;
    c3=(c1,c2);// jo phale hoga bo hee operload hoga sabse phele
    c3.display();
    cout<<endl;
    Coordinate c4(10,15,20);
    c3 = (c2,c1,c4);
    c3.display();

return 0;   
}
*/
// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.
/*
#include<iostream>
using namespace std;
class Integer{
    private:
     int x;
    public:
     Integer(){} 
     Integer(int a){x=a;}
     void setInt(int a){x=a;}
     operator int(){
        return x;
     }

};
int main(){
    Integer i(5);
    int a;
    a=i;
    cout<<a;
    i=a;
    cout<<i;
return 0;    
}
*/
// 10. Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15.
/*class Distance{
    private:
     int feet;
     int inches;
    public:
    Distance(){}
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    void Display(){
        cout<<" Feet = "<<feet<<" Inches "<<inches<<endl;
    }

    Distance operator()(int a,int b,int c){
        Distance d;
        d.feet=a+c+5;
        d.inches=a+b+15;
        return d;
    }

};
int main(){
    Distance d1(3,7);
    Distance d2;
    d2=d1(10,20,30);
    d1.Display();
    d2.Display();
    return 0;

}*/
// 11. Create a class Marks that have one member variable marks and one member
// function that will print marks. We know that we can access member functions using
// (.) dot operator. Now you need to overload (->) arrow operator to access that
// function.
/*
#include<iostream>
using namespace std;
class Marks{
    private:
    int marks;
    public:
    void setMar(int x){marks =x;}
     void printMarks(){
        cout<<"marks :"<<marks<<endl;
    }
    Marks *operator->(){
        return this;
    }
     

};
int main(){
    Marks m;
    m.setMar(3);
    m.printMarks();
    m->printMarks();
    
}*/