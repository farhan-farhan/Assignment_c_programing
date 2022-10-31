#include<iostream>
using namespace std;
/*class Dollar;
class Rupee{
    private:
    float x;
    public:
    float getR(){return x;}

     Rupee(){
        cout<<"Defoult Called for Rupee"<<endl;
    }
    Rupee(float n){//PD ->UD=>PC
        x = n;
        cout<<"perametrize constructore called for Rupee"<<endl;
    }

    void display(){
        cout<<"Rupee is "<<x<<endl;
    } 
    operator float(){  //UD->PD         //jis class ko type cast karna hai usme hi operaator ko likha jayga
        cout<<"float() called called for Rupee"<<endl;
        return x;   //return type to man lega float() by defouly firr likhna padega value ko
    }  

    operator Dollar();
    

   
};
class Dollar{
    private:

     float x;
    public:
     Dollar(){
        cout<<"Defoult Called for Dollar"<<endl;
    }
    Dollar(float n){//PD ->UD=>PC
        x = n;
        cout<<"perametrize constructore called for Dollar"<<endl;
    }

    void display(){
        cout<<"Dollar is "<<x<<endl;
    } 
    operator float(){  //UD->PD  
        cout<<"float() called for Dollar"<<endl;
        return x;  
    }  
    operator Rupee(){
        cout<<"Rupee called for Dollar"<<endl;
        return x*100.0;// rupee hi return karega://x dollar me hai
    }  

     Dollar(Rupee r){
        cout<<"Dollar(Rupee) called"<<endl;
        x = r.getR()/100.0; //(Dollar class niche hai so ye nahi chal raha)ANS->Class Dollar ko uper Declare karenge
        // cout<<"Dollar called for Rupee"<<endl;
        // Dollar hi return karega://x Rupee me hai
    }      
};
*/

/*
int main(){
    float x=5;
    Rupee r=x; //Perametrize Constructore call hoga (class Dollar);
    r.display(); //Display Rupee
    x =r;//x=r => x=(float)r  //float() for Rupee call hoga       // yaha prr r Rupee type ka hai and x float type ka hai
    
    float y=6;
    Dollar d=y;//Perametrize Constructore call hoga (class Dollar);
    y=d;   //float() (class Dollar)


    r=d; //dollar=> rupee (rupee class ke andar return karane Dollar)
    r.display();//display rupee

    d =(Dollar)r;// (rupee class ke andar return karane Dollar)
    d.display(); // display Dollar

   return 0; 
}*/
// basic->user define
//user define -> basic 
/*class Time{
    private:
     int Hour;
     int Minuts;
    public:
     void getdata(){
        cout<<"Enter the time HH:MM\n"<<Hour<<Minuts<<endl;
     } 
     void Display(){
        cout<<"Hour ="<<Hour<<"Minuts ="<<Minuts<<endl;
     }
    Time(){}
    Time(int k){Hour = k/60;Minuts = k/60;}
    operator int(){
        return Hour*60 + Minuts;
    }

};
int main(){
    Time t1;
    t1.getdata();
    t1.Display();
    int x=5;
    t1=x;
    t1.Display();
    x=t1;
}*/
// primitive ->class type
/*class Complex{
    private:
     int x,b;
    public:
    Complex(){}
    Complex(int k){
        x=k;b=0;
    }
     void setData(int x,int y){
        x=x;b=y;
     } 
    void showData(){
        cout<<"x ="<<x<<"b ="<<b<<endl;
    } 
};
int main(){
  Complex c1;
  int x =5;
  c1 =x; //c1.Complex(x)
  c1.showData(); 
   
}*/
//class type ->primitive type
/*class Complex{
    private:
     int x,b;
    public:
    Complex(){}
    Complex(int k){
        x=k;b=0;
    }
     void setData(int x,int y){
        x=x;b=y;
     } 
    void showData(){
        cout<<"x ="<<x<<"b ="<<b<<endl;
    } 
    operator int(){
        return x;
    }
};
int main(){
  Complex c1;
  c1.setData(3,4);
  int x;
  x=c1; //x=c1.operator int()
  c1.showData(); 
   
}*/

// class Type -> Another Class Type
/*
class Product{
    private:
     int x,b;
    public:
    // Product(){}
    // Product(int k){
    //     x=k;b=0;
    // }
     void setData(int x,int y){
        x=x;b=y;
     }
     int getA(){
        return x;
     }
     int getB(){
        return b;
     }
};
class Item{
    private:
     int m,n;
    public:
    void showData(){
        cout<<"m ="<<m<<" n ="<<n<<endl;
    } 
    Item(){}
    Item(Product p){
        m=p.getA();
        n=p.getB();
    }
      
};
int main(){
  Product p1;
  p1.setData(3,4);
  Item i;
  i=p1;
  i.showData();
//   p1=i;  two side hona chye conversion 
}
*/

// 1.Write x C++ program to convert Primitive type to Complex type.
//  Example -
//  int main()
// {
//  Complex c1;
//  Int x=5;
//  c1=x;
//  return 0;
// }
/*class Complex{
    private:
     int x;
     int b;
    public:
     void setData(int x,int y){
        x=x;
        b=y;
     }
    int getA(){
        return x;
    } 
    int getB(){
        return b;
    }
    Complex(){}
    Complex(int x){x=x;}

};
int main(){
    Complex c1;
    int x=5;
    c1=x;
   return 0; 
}*/
// 2. Write x C++ program to convert Complex type to Primitive type.
//  Example -
//  int main()
// {
//  Complex c1;
//  c1.setData(3,4);
//  int x;
//  x=c1;
//  return 0;
// }
/*class Complex{
    private:
     int x,b;
    public:
     Complex(){}
     Complex(int x,int y){
        x=x;
        b=y;
     }
    // void setData(int x,int y){
    //     x=x;
    //     b=y;
    // }  

     operator int(){
        cout<<"int() Called"<<endl;
        return x+b;
    }
    // operator long(){ error hogi -compiler confuse
    //     cout<<"int() Called"<<endl;
    //     return x+b;
    // }
    explicit operator long(){
        cout<<"long() Called"<<endl;
        return x+b;
    }
};
int main()
{
 Complex c1(4,6);
 cout<<c1;
//  c1.setData(3,4);
//  int x;
//  x=c1;
 return 0;
}*/
// 3. Create x Product class and convert Product type to Item type using constructor
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  return 0;
// }
/*
class Product{
    private:
     int x,b;
    public:
     Product(){}
     Product(int x,int y){
        x=x;
        b=y;
     }
     int getA(){
        return x;
     }
     int getB(){
        return b;
     }
     void display(){
        cout<<"x = "<<x<<" b ="<<b<<endl;
    }
};
class Item{
    private:
    int m;
    public:
     void showData(){
        cout<<"m = "<<m<<endl;
     }
     Item(){

     }
     Item(Product p){
        m=p.getA()+p.getB();
        // n=p.getB();

     }
};
int main(){
    Product p(3,5);
    Item i;
    i=p;//Item(product)
    i.showData();
    p.display();

    return 0;
}*/
// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  return 0;
// }
/*
class Item{
    private:
    int i;
    public:
     
     Item(){}
     Item(int x){i=x;}
     Item operator=(Item i){
        cout<<"Assignment called"<<endl;
        return Item();
        
     }
     void showData(){
        cout<<"i = "<<i<<endl;
     }
};
class Product{
    private:
    int x;
    int y;
    public:
    Product(){}
    Product(int a ,int b){
        x=a;
        y=b;
    }
    int getX(){return x;}
    int getY(){return y;}
     operator Item(){
        Item i(x+y);
        return i;
     }
     
     
    void showData(){
        cout<<"x = "<<x<<" y="<<y<<endl;
     } 

};

int main()
{
 Product p(4,7);
 Item i=p;
 p.showData();
 i.showData();
 return 0;
}*/
// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//  Invent1 s1(4,5);
//  Invent2 d1;
//  float tv;
//  tv=s1;
//  d1=s1;
//  return 0;
// }
/*
class Invent1{
    private:
     float x;
     float b;
    public:
     Invent1(){}
     Invent1(float x,float y){
     x=x;
     b=y;} 
    float getA(){
        return x;
    } 
    float getB(){
        return b;
    }
    operator float(){
        return x;
    }

};
class Invent2{
    private:
     float m,n;
    public:
     Invent2(){}
    //  Invent2(int x,int y){} 
    void showDate(){
        cout<<"m = "<<m<<" n= "<<n<<endl;
    }
    Invent2(Invent1 i){
        m=i.getA();
        n=i.getB();
    }
};
int main()
{
 Invent1 s1(4,5);
 Invent2 d1;
 float tv;
 tv=s1;
 d1=s1;
 return 0;
}*/
// 6. Create x Time class and take Duration in seconds. Now you need to convert seconds(i.e in 
// int ) to Time class.
// Exampleint main()
// {
//  int duration;
//  cout<<”Enter time duration in minutes”;
//  cin>>duration;
//  Time t1 = duration;
//  t1.display();
//  return 0;
// }
/*               sec/60
class Time{
    private:
     int Hour;
     int min;
    public:
    Time(){}
    Time(int duration){ 
        Hour = duration/3600;
        min =duration%3600;
    }
    void display(){
     cout<<"Hour = "<<Hour<<"  min = "<<min<<endl; 
    }
};
int main()
{
 int duration=4000;
//  cout<<”Enter time duration in minutes”;
//  cin>>duration;
 Time t1 =duration;
 t1.display();
 return 0;
 }*/
// 7. Create two class Time and Minute and add required getter and setter including constructors. 
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//  Time t1(2,30);
//  t1.display();
//  Minute m1;
//  m1.display();
//  m1=t1 // Fetch minute from time
//  t1.display();
//  m1.display();
//  return 0;
// }
/*class Time{
    private:
     int Hour;
     int Minuts;
    public:
     Time(){}
     Time(int hrr,int mins){
        Hour = hrr;
        Minuts =mins;
     }
     int getHor(){
        return Hour;
     } 
     int getMin(){return Minuts;}
     void display(){
        cout<<"Hour = "<<Hour<<" Minuts ="<<Minuts<<endl;
     }
};
class Minuts{
    private:
     int min;
    public:
     void display(){
        cout<<"Minuts = "<<min<<endl;
     }
    Minuts(){}
    Minuts(Time t){
        Minuts = t.getHor()*60;
    }  

};
int main()
{
 Time t(2,30);
 t.display();
 Minuts m;
 m.display();
 m=t; // Fetch minute from time
 t.display();
 m.display();
 return 0;
}*/
// 8. Create x Rupee class and convert it into int. And Display it.
// Exampleint main()
// {
//  Rupee r = 10;
//  int x = r;
// cout<<x;
//  return 0;
// }

class Rupee{
    private:
     int x;
    public:
     Rupee(){}
     Rupee(int k){x=k;} 
     int getR(){
        return x;
     }
     operator int(){return x;}
};
int main()
{
 Rupee r = 10;
 int x = r;
 cout<<x;
 return 0;
}
// 9. Create x Dollar class and add necessary functions to support int to Dollar type conversion.
// Exampleint main()
// {
//  int x = 50;
// Dollar d;
// d = x;
// d.display();
//  return 0;
// }
/*
class Dollar{
    private:
     int d0;
    public:
      void Display(){
        cout<<"dollar = "<<d0<<endl;
    }
    Dollar(){}
    Dollar(int k){
        d0 = k;
    }

};
int main()
{
 int x = 50;
Dollar d;
d = x;
d.Display();
 return 0;
}*/
// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
// Dollar and Dollar to Rupee conversion.
// Exampleint main()
// {
//  Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
//  return 0;
// }

/*class Dollar{
    private:
     int d;
    public:
     Dollar(){
        cout<<"Dc for Dollar"<<endl;
     } 
    Dollar(float y){
        cout<<"PC called for Dollar"<<endl;
        d = y;
    } 
    void display(){
        cout<<"dollar ="<<d<<endl;
    }
    operator float(){
        cout<<"op dollar"<<endl;
        return d;
    }
    Dollar getD(){
        return d;
    }
};

class Rupee{
    private:
     float r;
    public:
     Rupee(){}
     Rupee(Dollar d1){//Constructor ki help se 
        r = d1.getD()*100;
     }

     operator Dollar(){//without
        cout<<"Dollar called for rupee"<<endl;
        return r/100;
     }

     Rupee(float x){ 
        r = x;
        cout<<"Pc of Rupee"<<endl;
     }
     void Display(){
        cout<<"Display of Rupee"<<r<<endl;
     }
     operator float(){
        cout<<"operator"<<endl;
        return r;
     }
};

int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.Display();
r = d; // Dollar to Rupee Conversion
d.display();
r.Display();
 return 0;
}
*/


















/*class Dollar{
    private:
     int d;
    public:
     Dollar(){
        cout<<"Dc for Dollar"<<endl;
     } 
    Dollar(float y){
        cout<<"PC called for Dollar"<<endl;
        d = y;
    } 
    void display(){
        cout<<"d"<<d<<endl;
    }
    operator float(){
        cout<<"op d"<<endl;
        return d;
    }
    Dollar getD(){
        return d;
    }
};

class Rupee{
    private:
     float r;
    public:
     Rupee(){}
     Rupee(Dollar d1){//Constructor ki help se 
        r = d1.getD()*100;
     }
     Rupee(float x){ 
        r = x;
        cout<<"Pc of Rupee"<<endl;
     }
     void Display(){
        cout<<"Display of Rupee"<<r<<endl;
     }
     operator float(){       //jis class ke andar bana hai usko khud hi pass kar dega
        cout<<"operator"<<endl;
        return r;
     }
};

int main(){
    float x=10;
    Rupee r = x;
     r.Display();
     float y;
     y =(float)r ;
     cout<<y;

    float x = 20;
    Dollar d1 =x;
    d1.display();
    x = d1; 
    cout<<x<<endl;

    r=(Rupee)d1;//Rupee(dollar d)
   return 0;  
}*/
/*


int main(){
    float x=10;
    Rupee r = x;
     r.Display();
     float y;
     y =(float)r ;
     cout<<y<<endl;

    float x = 20;
    Dollar d1 =x;
    d1.display();
    x = d1; 
    cout<<x<<endl;

    r=(Rupee)d1;//Rupee(dollar d)
    r.Display();
   return 0;  
}*/



















// class IList{
//     private:
//      int x;
//      int y;
//     public:
//     IList(){}
//     //  IList(int x,int b):x(x),y(x)
//      IList(int x,int b):x(x),y(b)
//      {
//         // x=x;
//         // y=b;
//      } 
//      void display(){
//         cout<<" x ="<<x<<" y ="<<y<<endl;
//      }
// };
// int main(){
//     IList i(3,54);
//     i.display();
// }  
/*class IList{
    private:
     int x;
     int y;
     int &z;
     ABC a1;
    public:
    // IList(){}
    //  IList(int x,int b):x(x),y(x)
    //  IList(int x,int b):y(b),z(x),a1(5)
     IList(int x,int b):x(x),y(y),z(x),a1(5)
     {
          // a1 =4;//parametrize Constructor 
        // x=x;
        // y=b;
     } 
     void display(){
        cout<<" x ="<<x<<" y ="<<y<<endl;
     }
};
class ABC{
    private:
     int x;
    public:
     ABC(int x){
        x = x;
     } 
};
int main(){
    
    IList i(3,6);
    i.display();
}*/