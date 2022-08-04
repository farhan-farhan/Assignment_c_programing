
// Assignment - 10 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Functions in C Language

// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
#include<conio.h>
/*float circul_area(int);
int main(){
    int r;
    printf("enter the value of Radious:");
    scanf("%d",&r);
    printf("%f is the Area of circule",circul_area(r));
}
float circul_area(int x){
  return 3.14*x*x;
}*/
// 2. Write a function to calculate simple interest. (TSRS)
/*float simple_intrest(int, int, int);
int main(){
    int p,r,t;
    printf("Enter the value of P R T:\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("%f is simple intrest of given value",simple_intrest(p,r,t));
}
float simple_intrest(int x, int y, int z){
    return (x*y*z)/100;
}*/
// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
/*int check_oddEven(int);
int main(){
    int n;
    printf("Enter the no :\n");
    scanf("%d",&n);
    printf("%d  ",check_oddEven(n));
}
int check_oddEven(int x){
    if(x%2==0)
    return 1;
    else
    return 0;
}*/
// 4. Write a function to print first N natural numbers (TSRN)
/*void printNaturalN(int);
int main(){
    int n;
    printf("Enter the you want to print natural no");
    scanf("%d",&n);
    printNaturalN(n);
}
void printNaturalN(int x){
    int i;
    for(i=1;i<=x;i++)
     printf("%d  ",i);
}*/
// 5. Write a function to print first N odd natural numbers. (TSRN)
/*void printOddNaturalN(int);
int main(){
    int n;
    printf("Enter the you want to print odd natural no");
    scanf("%d",&n);
    printOddNaturalN(n);
}
void printOddNaturalN(int x){
    int i;
    for(i=1;i<=x;i++)
     printf("%d  ",2*i-1);
}*/
// 6. Write a function to calculate the factorial of a number. (TSRS)
/*int fact(int);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d ",factorial(n));
}
int factorial(int x){
    int fact=1,i;
    for(i=1;i<=x;i++)
     fact=fact*i;
    return fact; 
}*/
// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)

/*
int fact(int) ;  
int combination(int ,int);    
int main(){

     int n,r; 
     printf("Enter the value of n,r :");
     scanf("%d%d",&n,&r);
    printf("%d",combination(n,r));
return 0;   
}    
int combination(int a,int j){
    // for(j=0;j<=a ;j++){
        return fact(a)/(fact(j)*fact(a-j));
    // }
}
int fact(int x){
    int fact=1,i;
    for(i=1;i<=x;i++)
     fact=fact*i;
   return fact;  
    }
  */ 
// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)

/*int fact(int);
int permutation(int,int);
int main(){
    int n,r;
    printf("Enter the value of n,r");
    scanf("%d%d",&n,&r);
    printf("%d",permutation(n,r));
}
int permutation(int a,int j){  
    return fact(a)/fact(a-j);
}
int fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
      
    }
    return fact;  
}*/
// 9. Write a function to check whether a given number contains a given digit or not. 
// (TSRS)
/*
int ContainDigitORnot(int);
int main(){
    int x;
    printf("Enter the N:");
    scanf("%d",&x);
    
    if(ContainDigitORnot(x))
    printf("digit  is contain by %d",x);
    else
    printf("digit is not containing by %d",x);
    }
int ContainDigitORnot(int n){
    int r;
    int d=6;
    while(n){
        r=n%10;
         if(r==d)
          return 1;
        n=n/10; 
    }
    return 0;
}*/
// 10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
/*#include<stdio.h>
void primeFactore(int);
int main(){
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    primeFactore(n);
}
void primeFactore(int x){
    int i;
    for(i=2;x>1;i++){
        while(x%i==0){
            printf("%d ",i);
           x=x/i;
        }
    
      }
}
  


*/






































// /*void val(int, int);
// int main(){
//     int n;
//     printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
//     scanf("%d",&n);

//       void val(int a, int b){
//        printf("Enter the value of a and b :");
//        scanf("%d%d",&a,&b);
//        }
//     switch (n)
//     {
//     case 1:
//         int c=0,x,y;
//         val( x, y);
//         c=x+y;
//         printf("%d",c);

//         break;
    
//     default:
//         break;
//     }   

// }*./