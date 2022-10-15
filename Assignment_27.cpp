// Assignment - 27 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Operator overloading and friend function
// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
/*
#include<iostream>
using namespace std;
class Complex{
 private:
 int real,img;
 int True;
 public:
 void input(){
    cin>>real;
    cin>>img;
 }
  Complex(int x,int y){
    real=x;
    img=y;
  }
  Complex(){}
  Complex operator+(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
  }
  Complex operator-(Complex c){
    Complex temp;
    temp.real=real - c.real;
    temp.img =img - c.img;
    return temp;
  }
  Complex operator*(Complex c){
    Complex temp;
    temp.real=real * c.real;
    temp.img =img * c.img;
    return temp;
  }
  int operator==(Complex c){
    if(real==c.real&&img==c.img)
    return 1;
    else
     return 0;
  }
  void Display(){
    cout<<"real= "<<real<<" img= "<<img<<endl;
  }
};
int main(){
    Complex c1(45,6),c3,c4,c5;
    Complex c2(3,5);
    c3=c1+c2;
    c5=c1*c2;
    c5.Display();
    c1.Display();
    c2.Display();
    c4=c1-c2;
    c3.Display();
    c4.Display();
    if(c1==c2){
        cout<<"c1 is equal c2"<<endl;
    }else{
        cout<<"c1 is not equal c2"<<endl;
    }
return 0;    
}
*/
// 2. Write a C++ program to overload unary operators that is increment and decrement.
/*
#include<iostream>
using namespace std;
class incdec{
    private:
     int n;
    public:
    void input(){
        cout<<"Enter The number:"<<endl;
        cin>>n;
    }
    incdec operator++(){
        incdec temp;
        temp.n=++n;
        return temp;
    }
    incdec operator++(int){
        incdec temp;
        temp.n=n++;
        return temp;
    }
    
    void Display(){
        cout<<n<<endl;
    }
friend ostream& operator<<(ostream &os,incdec c);
    
};
ostream& operator<<(ostream &os,incdec c){
        os<<"value "<<c.n<<endl;
        return os;
    }
int main(){
    incdec c1,c2;
    c1.input();
    cout<<"PostIncrement"<<endl;
   (c1++).Display();
   cout<<"preeInctement "<<endl;
    (++c1).Display();

    cout<<c1;
    cout<<endl;

    c2.input();
    cout<<c2;
   (c2++).Display();
    (++c2).Display();
    cout<<c2;
    cout<<c1<<c2;

return 0;    
}
*/
// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
/*


#include<iostream>
using namespace std;
class Complex{
    private:
     int rel;
     int img;
    public:
    void setData(int x,int y){rel=x;img=y;}
    // void InputData(){cout<<"Enter the value of rel:";
    // cin>>rel;
    // cout<<"Enter the value of img:";
    // cin>>img;}
    void showData(){
        cout<<"rel= "<<rel<<" img= "<<img<<endl;
    }
     Complex(){ }
     Complex(int x){rel=x;}
     Complex(int x,int y){
        rel = x;
        img = y;
     }
    friend Complex operator+(Complex ,Complex);
};
Complex operator+(Complex x,Complex y){
        Complex temp;
        temp.rel = x.rel + y.rel;
        temp.img = x.img +y.img;
        return temp;
    }

int main(){
    Complex c1,c2,c3;
    // c1.setData(2,5);
    // c2.setData(3,2);
    // c1.InputData();
    // c2.InputData();
    c3 = c1 +c2;
    c3.showData();

return 0;    
}
*/
// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
// Output -
/*
class Time{
    private:
     int Hour;
     int Minuts;
     int Second;
    public:
    Time(){
        Hour=Minuts=Second=0;
    }
    friend int operator>>(istream &input,Time &t){
        cout<<"\nEnter Houe "<<endl;
        input>>t.Hour;
        cout<<"Enter Minuts "<<endl;
        input>>t.Minuts;
        cout<<"Enter Second "<<endl;
        input>>t.Second;

        t.Minuts = t.Minuts +t.Second/60;
        t.Second*=60;
        t.Hour = t.Hour +t.Minuts/60;
        t.Minuts*=60;
        if(t.Hour>=25)
          return 1;
          else
           return 0;
      }
    friend void operator<<(ostream &output,Time &t){
        output<<"\n Hour"<<t.Hour;
        output<<"\n Mints"<<t.Minuts;
        output<<"\n Secomnd"<<t.Second;
    }
    int operator==(Time t1){
        int tot = Hour*3600 + Minuts*60 + Second;
        int tot1 = t1.Hour*3600+ t1.Minuts*60 +t1.Second;
        if(tot==tot1)
            return 1;
        else 
             return 0;
    }
    ~Time(){cout<<"\n finished";}

     
};
int main(){
    Time t1,t;
    cout<<"-----------------"<<endl;
    cout<<"Enter First Time:"<<endl;
    if(cin>>t){
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"First Time"<<endl;
    cout<<t;
    cout<<"-----------------"<<endl;
    cout<<"Enter Second Time:"<<endl;
    if(cin>>t1){
        cout<<"\n Invalid Time";
        return 0;
    }
    cout<<"Second Time"<<endl;
    cout<<t1;
    if(t==t1)
        cout<<"n\n Times are Same ";
    else
     cout<<"\n\n Time are Diffrent ";
     return 0;

    

return 0;    
}
*/
// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

/*
#include<iostream>
using namespace std;
class Number{
    private:
     int x,y,z;
    public:
    Number(){}
    Number(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void input(){
        cout<<"Enter the value of X"<<endl;
        cin>>x;
        cout<<"Enter the value of Y"<<endl;
        cin>>y;
        cout<<"Enter the value of Z"<<endl;
        cin>>z;
    }
    void Display(){
        cout<<x<<y<<z;
    }
//   Number operator-(Number n);

    void operator-(){//jis obj ke samne - bo apne app call kar lega
        x=-x;
        y=-y;
        z=-z;
     } 
};

int main(){
    Number n,n1,n2;
    n.input();
    cout<<"Numer is:"<<endl;
    n.Display();
    -n;
    cout<<"\nNegative no is :"<<endl;
    n.Display();


return 0;    
}
*/
// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
/*
#include<iostream>
#include<cstring>
using namespace std;
class CString{
    public:
     char str[20];
    public:
    void get_string(){
        cout<<"\n Enter the String"<<endl;
        cin>>str;
    }
    void display(){
        cout<<str<<endl;
    }
    CString operator+(CString x){
        CString s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;
    } 
    int operator==(CString &t){
        for(int i=0;str[i];i++){
            for(int j=0;t.str[j];j++){
                if(str[i]==t.str[j]){
                    return 0;
                }else
                 return 1;

            }
        }
        return 0;
    } 
};
int main(){
    CString str1,str2,str3;
    int result=0;
    str1.get_string();
    str2.get_string();
    cout<<"\n-----------------------------------------------";
    cout<<"\n\n First string is";
    str1.display();
    cout<<"\n\n Second string is";
    str2.display();
    cout<<"\n----------------------------------------------";
    str3=str1+str2;
    cout<<"\n\n concatinate string is";
    str3.display();
    result = str1==str2;
    if(result==0){
        cout<<"\n\n both string is Equal";
    }
    else
     cout<<"\n both string are note Equal";

return 0;    
}
*/
// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
// Output-
// f1  :0/0
// f2  :0/0
// Enter first Fraction Value

// Numerator  : 2 
// Denominator : 3
// f1++ : 3/4
// ++f1 : 4/5
// Enter 2nd Fractin value
// numerator : 1
// Denuminator :2
// f2 =++f1
// f1 : 5/6
// f2 :5/6
// f2 =f1++
// f1 : 6/7
// f2 : 5/6
/*#include<iostream>
using namespace std;
class fraction
{
    private:
      long num;
      long deno;
     public:
      fraction(long n=0,long d=0){num =n;deno=d;}
    friend void operator>>(istream &in,fraction &f){
      cout<<"\n Numerator : ";
      in>>f.num;
      cout<<"\n Denumerator : ";
      in>>f.deno;
    }   
    friend void operator<<(ostream &out ,fraction &f){
      out<<f.num<<"/"<<f.deno;
    }
    fraction operator++(){
      ++num;
      ++deno;
       return (*this);
    }
    fraction operator++(int){
      fraction temp = *this;
      num++;
      deno++;
      return temp;
    }
};
int main(){
fraction f1,f2;
cout<<"\n f1  : ";
cout<<f1;
cout<<"\n f2  :  ";
cout<<f2;

cout<<"\n\n Enter ist Fraction value \n";
cin>>f1;
cout<<"\n f1++  :";
f1++;
cout<<f1;
cout<<"\n ++f1  :  ";
++f1;
cout<<f1;

cout<<"\n\n Enter second Fraction value \n";
cin>>f2;
f2 = ++f1;

cout<<"\n f2 = ++f1";
cout<<"\n f1 :  ";
cout<<f1;
cout<<"\n f2  : ";
cout<<f2;
f2=f1++;

cout<<"\n \n f2 = f1++";
cout<<"\n f1  :  ";
cout<<f1;
cout<<"\n f2  : ";
cout<<f2;
return 0;    
}
*/

// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
// Output -
// Enter marix Element (3*3):
// matrix is :
// 7   8   9
// 1   2   3 
// 4   4   6
// matrix is :
// -7   -8  -9
// -1   -2  -3
// -4   -5  -6
/*
#include<iostream>
using namespace std;
class Matrix{
    private:
    int a[3][3];
    public:
     void input(){
        int i;
        for(i=0;i<3;i++){
            for(int j=0;j<3;j++){
            cin>>a[i][j];
         }
        }
    }
    void operator-(){
            for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                a[i][j] = -a[i][j];
             }
        }
    }
    void display(){
           for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                cout<<" ";
                  cout<<a[i][j];
              }
              cout<<"\n";
           }
       }  
        

};
int main(){
    Matrix m;
    cout<<"Enter the matrix(3*3)"<<endl;
    m.input();
    m.display();
    -m;
    cout<<"- is "<<endl;
    m.display();
   
return 0;   
}
*/
// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
/*

#include<iostream>
using namespace std;
class mystring{
    private:
     char str [100];
     public:
     void input(){
        cout<<"Enter the string"<<endl;
        cin>>str;
        }
        void Display(){
            cout<<str;
        }

        void operator!(){
        for(int i=0;str[i];i++){
        if(str[i]<=90 && str[i]>=65){
            str[i] = str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122){
            str[i] = str[i]-32;
        }
      }
      cout<<"\n\n Reverse Case string is :"<<str;
    }   
};
int main(){
    mystring my;
    my.input();
    cout<<"\n \n string : "<<endl;
    my.Display();
    !my;
    
return 0;    
}
*/
// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
// Output -
/*
#include<iostream>
using namespace std;
class Matrix{
    int a[2][2];
    public:
    //  Matrix(){}
     void input(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
             cin>>a[i][j];
            }
        }
     }
    
    
       void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<" ";
               cout<<a[i][j];
            }
            cout<<"\n";
         }
        }
        Matrix operator+(Matrix m){
            Matrix temp;
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                 temp.a[i][j]=a[i][j]+ m.a[i][j];
                }
            }
                 return temp;
        }
    
    
};
int main(){
    Matrix m1,m2,m3;
    cout<<"Enter the Matrix 1"<<endl;
     m1.input();
     cout<<"Enter the Matrix 2"<<endl;
     m2.input();
     m3 = m1 + m2;
     cout<<"Adition of Two Matrix is :"<<endl;
     m3.display();

}*/