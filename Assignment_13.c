// Assignment - 13 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on Recursion in C Language

// 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
/*int SumOfN(int n){
    // int c;
    if(n==0)
      return 0;
    return n+SumOfN(n-1);

}
int SumOfN(int);
int main(){
    int x;
    printf("Enater the value of N");
    scanf("%d",&x);
    printf("%d ",SumOfN(x));
}*/
// 2. Write a recursive function to calculate sum of first N odd natural numbers
/*int SumOfN(int n){
    // int c;
    if(n==0)
      return 0;
    return 2*n-1+SumOfN(n-1);

}
int SumOfN(int);
int main(){
    int x;
    printf("Enater the value of N");
    scanf("%d",&x);
    printf("%d ",SumOfN(x));
    }*/
// 3. Write a recursive function to calculate sum of first N odd natural numbers
/*int SumOfN(int n){
    // int c;
    if(n==0)
      return 0;
    return 2*n+SumOfN(n-1);

}
int SumOfN(int);
int main(){
    int x;
    printf("Enater the value of N");
    scanf("%d",&x);
    printf("%d ",SumOfN(x));
    }*/
// 4. Write a recursive function to calculate sum of squares of first n natural numbers
/*int SumOfN(int n){
    // int c;
    if(n==0)
      return 0;
    return n*n+SumOfN(n-1);

}
int SumOfN(int);
int main(){
    int x;
    printf("Enater the value of N");
    scanf("%d",&x);
    printf("%d ",SumOfN(x));
    }*/
// 5. Write a recursive function to calculate sum of digits of a given number
/*int SumOfDigit(int n){
    if(n%10==0)
     return 0;
    return n%10+SumOfDigit(n/10);
}
int SumOfDigit(int);
int main(){
    int x;
    printf("Enter the no :");
    scanf("%d",&x);
    printf("%d",SumOfDigit(x));
}*/
// 6. Write a recursive function to calculate factorial of a given number
/*int factOfN(int n){
    if(n==1)
     return 1;
    return n*factOfN(n-1);
}

int factOfN(int);
int main(){
    int x;
    printf("Enter the no :");
    scanf("%d",&x);
    printf("Factorial of %d is  %d",x,factOfN(x));
}*/
// 7. Write a recursive function to calculate HCF of two numbers
int HCF(int n,int m){
    // int i,hcf;
    // for(i=1;i<=(n<m?n:m);i++){

    //  if(n%i==0 && m%i==0){
    //     hcf=i;
    //  }
    // }
    //  return hcf;
    // return 1;
    if(m==0)
     return n;
    HCF(m,n%m);

}
int HCF(int ,int);
int main(){
    int x,y;
    printf("Enter the value of N,M:");
    scanf("%d%d",&x,&y);
    printf("HCF of %d and %d is %d",x,y,HCF(x,y));
}
// 8. Write a recursive function to print first N terms of Fibonacci series
/*int printFibonacciN(int n){

  {
       if(n==0||n==1)
        return n;
    return printFibonacciN(n-1)+printFibonacciN(n-2);
         
       
   }

}
int printFibonacciN(int);
int main(){
     int x,i;
     printf("Enter the value of N");
     scanf("%d",&x);
      for(i=0;i<=x;i++){
       printf("%d ",printFibonacciN(i));
        }
   return 0;     
}*/
// 9. Write a program in C to count the digits of a given number using recursion.
/*int CountDigit(int n){
 if (n == 0)
   return 0;
  return 1+CountDigit(n / 10);

}
int CountDigit(int);

int main()
{
    int x;
    printf("Enter the value of N");
    scanf("%d", &x);
     printf("%d",CountDigit(x) );
    
}*/
// 10. Write a program in C to calculate the power of any number using recursion.
/*int po(int n,int m){
    if(m==0)
     return 1;

    return n*(po(n,m-1));

}
int po(int, int );
int main(){
    int x, y;
    printf("Enter the value of X and Y");
    scanf("%d%d",&x,&y);
    printf("%d",po(x,y));
}*/