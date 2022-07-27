// Assignment - 6 -Use any loop
// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
#include<math.h>
/*int main(){
    int n,i,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural no is %d",sum);
    
}*/
// 2. Write a program to calculate sum of first N even natural numbers
/*int main(){
    int n,i,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+2*i;
    }
    printf("Sum of frist n even natural no is %d",sum);
    }*/
// 3. Write a program to calculate sum of first N odd natural numbers
/*int main(){
    int n,i,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+2*i-1;
    }
    printf("Sum of first n odd natural no is %d",sum);
    }*/
// 4. Write a program to calculate sum of squares of first N natural numbers
/*int main(){
    int n,i,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of n natural no is %d",sum);
    }*/
// 5. Write a program to calculate sum of cubes of first N natural numbers
/*int main(){
    int n,i,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i*i*i;
    }
    printf("Sum of n natural no is %d",sum);
    }*/
// 6. Write a program to calculate factorial of a number
/*int main(){
    int n,fact=1;
    printf("Enter the value of N:");
    scanf("%d",&n);
    while (n!=0)
    {
        fact=fact*n;
        n--;
    }
    printf("%d ",fact);
}*/
// 7. Write a program to count digits in a given number
/*int main(){
    int n,count=0,r;
    printf("Enter The number");
    scanf("%d",&n);
    while (n!=0)
    {
        // r=n%10;
        count++;
        n=n/10;
    }
    printf("%d digits in given number",count);
    
}*/

// 8. Write a program to check whether a given number is a Prime number or
// not
/*int main(){
    int n,i;
    int endicater;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       if( n%i==0)
       endicater=1;
        
    }
    if(endicater==1)
    printf("%d is not prime number",n);
    else
    printf("%d is a prime number",n);
}*/
// 9. Write a program to calculate LCM of two numbers
/*int main(){
    int n,m,i,endicater;
    printf("Enter the value of n,m:");
    scanf("%d%d",&n,&m);
    for(i=n<m?n:m ;i<=n*m;i++)
    {
        if(i%n==0 && i%m==0)
        break;
        endicater=1;
        //  printf("%d is",i);
    }
    if(endicater==1)
   
    printf("%d is",i);
}*/
// 10. Write a program to reverse a given number
/*int main(){
    int res ,n,rev=0,r;
    printf("Enter the no:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev =rev*10 + r;
        n=n/10;
    }
    printf("%d",rev);
}*/