// Assignment - 7 - Iterative Control Statements (Part - 2)
// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
/*int main(){
    int n,a=-1,b=1,i,c;
    printf("Enter the Number");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {

        c= a+b;
        a=b;
        b=c;

    }
    printf("%d ",c);

}*/
// 2. Write a program to print first N terms of Fibonacci series
/*int main(){
    int a=-1,b=1,c,n,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
}
}*/
// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

// 4. Write a program to calculate HCF of two numbers
/*int main(){
    int n,m,hcf,i;
    printf("Enter the value of n,m:");
    scanf("%d %d",&n,&m);

    for(i=1;i<=(n<m?n:m);i++){
        if(n%i==0 && m%i==0){
        hcf=i;
    }
    }
    printf("HCF of %d and %d is   %d ",n,m,hcf);
}*/
// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
/*
int main()
{
    int n, m, hcf, i;
    printf("Enter the value of n,m:");
    scanf("%d %d", &n, &m);

    for (i = 1; i <= (n < m ? n : m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            hcf = i;
        }
    }
    if (hcf == 1)
        printf("%d and %d is coprime number ", n, m);
    else
        printf("%d and %d not coprime number", n, m);
}*/
// 6. Write a program to print all Prime numbers under 100

/*int main()
{
    int n, i, count = 0;
    // printf("Enter the value of n:");
    // scanf("%d", &n);
    for (n = 1; n <= 100; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;

            }
        }

        if (count == 0 && n!=1)
            printf("%d  ",n);
        count=0;

    }
}*/
//  7. Write a program to print all Prime numbers between two given numbers
/*int main()
{
    int n, i, flag = 0;
     int start, end;
     printf("Enter the value of start and end :");
     scanf("%d%d", &start, &end);
    for (n = start; n <= end; n++)
    {
        for (i = 2; i < n; i++)
        {    flag=0;
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d  ", n);
    }
}*/
// 8. Write a program to find next Prime number of a given number
int main()
{
  int n, i;
      int start;
    printf("Enter the prime no");
    scanf("%d",&start);  
    for (n = start+1; n; n++)
    {    
        for (i = 2; i < n; i++)
        {    
            if (n % i == 0) 
            break;
        }
        if (n==i)
            break;
    }  
    printf("The next prime number of %d is %d",start,i);
}

// 9. Write a program to check whether a given number is an Armstrong number
// or not
/*int main(){
    int n,r,sum=0;
     printf("Enter a number:");
     scanf("%d",&n);
     int x=n;
    while(x!=0){
        r=x%10;
        sum=sum+r*r*r;
        n=x/10;
    }
    if(sum==n)
    printf("%d is Armstrong no",n);
    else
    printf("%d is not a Armstrong no",n);
}*/
// 10. Write a program to print all Armstrong numbers under 1000
/*int main()
{
    int n, r, sum;
    //  printf("Enter a number:");
    //  scanf("%d",&n);
    int x, count = 0;
    printf(" Armstrong no b/w 1 to 100:\n");
    for (n = 1; n <= 1000; n++)
    {
        int x = n;
        sum = 0;
        while (x != 0)
        {
            r = x % 10;
            sum = sum + (r * r * r);

            x = x / 10;
        }

        if (sum == n)
            printf("%d \n", sum);
    }
}*/