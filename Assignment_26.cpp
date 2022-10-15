// Assignment - 26 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Member function, static, constructor
// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
/*#include<iostream>
using namespace std;
class Complex{
    private:
     int a,b;
    public:
     void setData(int x,int y){
        a=x;
        b=y;
     } 
    void showData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    } 
    Complex add(Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main(){
    Complex c1,c2,c3;
    c1.setData(2,6);
    c2.setData(4,8);
    c1.showData();
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
 return 0;    
}
*/
// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
/*
#include<iostream>
using namespace std;
class Time{
    private:
     int HR,MIN,SEC;
    public:
    void setTime(int h,int m,int s){
        HR=h;
        MIN=m;
        SEC=s;
    }
    void showTime(){
        cout<<HR<<":"<<MIN<<":"<<SEC<<endl;
    } 
    Time add(Time t){
        Time temp;
        temp.HR=HR+t.HR;
        temp.MIN=MIN+t.MIN;
        temp.SEC=SEC+t.SEC;
        temp.normalize();
        return temp;
    }
    void normalize(){
        MIN=MIN + SEC / 60;
        SEC=SEC % 60;
        HR = HR + MIN / 60;
        MIN =MIN % 60;
    }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(2,50,30);
    t2.setTime(7,20,34);
    t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
return 0;    
}
*/
// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
/*
#include<iostream>
using namespace std;
class Cube{
    private:
     double vol;
     public:
     double side;
     Cube(){}
     Cube(int x){
        side=x;
     }
    double volCube(){
        return side*side*side;
     }

};
int main(){
    Cube c1(4.0);
    Cube c2;
    
    cout<<"\n The side of the cube is:"<<c1.side<<endl;
    cout<<"\n The Volume of the first cube is : "<<c1.volCube() <<endl;
    cout<<"\nEnter the lenght of  second Cube is : ";
    cin>>c2.side;
    cout<<"\n The Volume of the first cube is : "<<c2.volCube() <<endl;

    cin>>c2.side;


return 0;    
}
*/
// 4. Define a class Counter and Write a program to Show Counter using Constructor.
/*
#include<iostream>
using namespace std;
class Counter{
    private:
    static int count;
    public:
    Counter(){
        count++;
    }
    
    int get_count(){
        return count;
    }
};
int Counter:: count;
int main(){
    Counter c1,c2,c3;
    cout<<c1.get_count();
    
    
return 0;    
}
*/
// 5. Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
/*
#include<iostream>
using namespace std;
class Date{
    private:
     int D,M,Y;
    public:
    Date(){}
     Date(int date,int month,int year){
        D=date;
        M=month;
        Y=year;
    } 
    void get(){
        cout<<"Enter the value of D/M/Y "<<endl;
        cin>>D>>M>>Y;
    }
    void Display(){
        cout<<D<<":"<<M<<":"<<Y<<endl;
    }
};
int main(){
    Date d1;
    d1.get();
    d1.Display();
    
    Date d(2,4,5);

    d.Display();
return 0;    
}
*/
// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
/*#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int standerd,rollno;
    public:
     Student(string n,int std,int rolln){
        name=n;
        standerd=std;
        rollno=rolln;
     }
     void Display(){
        cout<<"name = "<<name<<endl<<"standerd = "<<standerd<<endl<<"rollno = "<<rollno<<endl;
     }
};
int main(){
    Student st1("farhan",12,10203),st2("Abdulla",2,3456);
    cout<<"Record of student 1::---------------"<<endl;
    st1.Display();
    cout<<"Record of student 2::---------------"<<endl;
    st2.Display();
return 0;    
}
*/
// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
/*
#include<iostream>
using namespace std;
class Box{
    private:
     int l,b,h,volume;
    public:
    Box(int lenght,int breath,int height){
        l=lenght;
        b=breath;
        h=height;
    }
    int getVolume(){
        return volume;
    }
    void CalculateVolume(){
       volume=l*b*h;
    }
};
int main(){
    Box b1(3,5,6);
    b1.CalculateVolume();
    cout<<b1.getVolume();

return 0;    
}
*/
// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
/*
#include<iostream>
using namespace std;
class Bank{
    private:
     int P,R,T;
     float SI;
    public:
     Bank(int Principal,int Rate,int Time){
        P=Principal;
        R=Rate;
        T=Time;

     } 
     float getSI(){
        return SI;
     }
    void CalculateSI(){
        SI=(P*R*T)/100;
    } 

};
int main(){
    Bank b(50,20,3);
    b.CalculateSI();
    cout<<b.getSI();
return 0;   
}
*/
// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
/*
#include<iostream>
using namespace std;
class Bill{
    private:
     float unit,rs,bill,c_no;
     string c_name;
    public:
    float getBill(){
        return bill;
    } 
    Bill(){}
    void get(){
        cout<<"Enter the costumer Detail "<<endl;
        cout<<"customer Number is :"<<endl;
        cin>>c_no;
        cout<<"custome name is :"<<endl;
        cin>>c_name;
        cout<<"Enter the Units Numbers"<<endl;
        cin>>unit;
    }
    void showBill(){
        cout<<"calculated bill is:"<<endl;
        cout<<bill;
    }
    void calculateBill(){
        if(unit>0&&unit<=100){
            bill=unit*1.20;
        }
        else if(unit>100&&unit<=200){
            bill =100*1.20+(unit-100)*2;
        }
        else if(unit>200){
            bill=100*1.20 + 200*2 + (unit-200)*3;
        }
    }
};
int main(){
    Bill b;
    b.get();
    b.calculateBill();
    b.showBill();
return 0;    
}
*/
// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
/*
#include<iostream>
using namespace std;
class StaticCount{
    private:
     static int b;
     public:
     int getstatic(){
        return b;
     }
     void fun(){
        b++;
     }
};
int StaticCount:: b;
int main(){
    StaticCount s1;
    s1.fun();
    s1.fun();
    s1.fun();
    cout<<s1.getstatic();
}
*/