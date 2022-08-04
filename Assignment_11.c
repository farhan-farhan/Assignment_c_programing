// Assignment - 11 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// More on functions in C Language
// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include <stdio.h>
/*int LCM(int, int);
int main(){
     int n,m;
     printf("Enter the no n,m:\n");
     scanf("%d%d",&n,&m);
    printf("LCM of %d and %d is %d ",n,m,LCM(n,m));

}
int LCM(int x,int y){
    int i,count=0;
    for (i = x<y?x:y; i <= x*y; i++){
        if(i%x==0&&i%y==0){
            count++;
            break;
        }
    }
    if(count==1)
        // printf("%d  is",i);
        return i;

}*/
// 2. Write a function to calculate HCF of two numbers. (TSRS)
/*int HCF(int, int);
int main(){
     int n,m;
     printf("Enter the no n,m:\n");
     scanf("%d%d",&n,&m);
    printf("HCF of %d and %d is %d ",n,m,HCF(n,m));

}
int HCF(int x,int y){
    int i,HCF;
    for (i =1 ; i <=(x<y?x:y); i++){
        if(x%i==0&&y%i==0){

            HCF=i;
        }
    }
        return HCF;

}*/
// 3. Write a function to check whether a given number is Prime or not. (TSRS)
/*int IsPrime(int);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d is prime no ",IsPrime(n));
}
int IsPrime(int x){
    int i,flag=0;
    for(i=2;i<x;i++){
        if(x%i==0){
            flag++;
            break;
        }
    }
     if (flag==0)
         return x;
         else
          return 0;

}*/
// 4. Write a function to find the next prime number of a given number. (TSRS)
/*int NextPrime(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("%d is prime no ", NextPrime(n));
}
int NextPrime(int x)
{
    int i;
    for (x = x + 1; x; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                 break;
            }
        }
        if (x == i)
          return x;  
    }
     
     
}*/
// 5. Write a function to print first N prime numbers (TSRN)
/*void IsPrime(int);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    IsPrime(n);
}
void IsPrime(int x){
    int i,k,flag;
    for(k=2;k<=x;k++){
          flag=0;
    for(i=2;i<k;i++){
       
        if(k%i==0){
            flag++;
            break;
        }
    }
     if (flag==0)
        printf("%d ",k);
}   }*/     
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
/*void BetweenTwoPrime(int,int);
int main(){
    int n,m;
    printf("Enter the number two no:");
    scanf("%d%d",&n,&m);
    BetweenTwoPrime(n,m);
}
void BetweenTwoPrime(int x,int y){
    int i,k,flag;
    for(k=x;k<=y;k++){
          flag=0;
    for(i=2;i<k;i++){
       
        if(k%i==0){
            flag++;
            break;
        }
    }
     if (flag==0)
        printf("%d ",k);
    }
} */        
// 7. Write a function to print first N terms of Fibonacci series (TSRN)
/*void NtermFibonacci(int);
int main(){
int x;
printf("Enter the number:");
scanf("%d",&x);
NtermFibonacci(x);
}
NtermFibonacci(int n){
int a=-1,b=1,c,i;
for(i=1;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
}
}*/
// 8. Write a function to print PASCAL Triangle. (TSRN)

/*
void pascal(int);
int fact(int) ;  

int combination(int,int);    
int main(){

      int l; 
      printf("Enter the value of Pascal Traingle :");
      scanf("%d",&l);
       pascal(l);
return 0;   
}    
void pascal(int n){
    int i,j,s;
    for(i=0;i<=n;i++){
        for(s=1;s<=n-i;s++)
           printf(" ");
        for(j=0;j<=i;j++){
           
            printf( "%d ",combination(i,j));
        }
        printf("\n");
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
    }*/


// 9. Write a program in C to find the square of any number using the function.
/*int square(int);
int main(){
    int r;
    printf("enter the no ");
    scanf("%d",&r);
    printf("%d is square ",square(r));
}
int square(int x){
    return x*x;
}*/
// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
/*int fact(int);
int main(){
    int n,i,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum=sum+fact(i)/i;}
    printf("%d",sum);
}
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i; 
    }
    return fact;  
}*/