#include <stdio.h>
// 1. Write a program to print unit digit of a given number
/*int main()
{
    int n;
    printf("Enter the no :");
    scanf("%d", &n);
    n = n % 10;
    printf("%d", n);
    return 0;
}*/
// 2. Write a program to print a given number without its last digit.
/*int main(){
    int n ;
    printf("Enter the no :");
    scanf("%d", &n);
    n=n/10;
    printf("%d",n);
    return 0;
}*/

// 3. Write a program to swap values of two int variables
/*int main()
{
    int a = 4, b = 5,c;
    c=a;
    a=b;
    b=c;

    printf("Enter the value of a=%d and b=%d", a, b);
}*/
// 4. Write a program to swap values of two int variables without using a third variable.
/*int main(){
    int a=3,b=4;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}*/
// 5. Write a program to input a three-digit number and display the sum of the digits.
/*int main(){
    int n,r,sum=0;
    printf("Enter three digits no:");
    scanf("%d",&n);
    
    
        r=n%10;
        n=n/10;
        sum=sum+r;

         r=n%10;
        n=n/10;
        sum=sum+r;

         r=n%10;
        n=n/10;
        sum=sum+r;
    

    printf("Sum of three digits is %d",sum);
}*/
// 6. Write a program which takes a character as an input and displays its ASCII code.
/*int main(){
    char ch;
    printf("Enter the value of char:");
    scanf("%c",&ch);
    printf("Ascii value is:%d",ch);
    return 0;
}*/
// 7. Write a program to find the position of first 1 in LSB.    [(number)operator(mask)]
int main(){
 int i,n,count=0,res=0;
  printf("Enter the value of n");
  scanf("%d",&n);
while(n!=0){
 res = n&1;
 count++;
 if(res==1){
 printf("%d ",count);
 break;
  }
 n=n>>1; 
  
  }
}
// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.
/*int main()
{
    int n;
    printf("Enter the no :");
    scanf("%d", &n);
    if ((n & 1) == 0)    // if last bit 1 than no is odd  else last bit is 0 than no is even
     printf("Even no"); 
     else printf("odd no");
    return 0;
}*/
// 9. Write a program to print size of an int, a float, a char and a double type variable
/*int main(){
    // int a;
    // cha c;
    // float f;
    // double d;
    printf("Size of int is:%d\n",sizeof(int));
    printf("Size of char is:%d\n",sizeof(char));
    printf("Size of float is:%d\n",sizeof(float));
    printf("Size of double is:%d",sizeof(double));
}*/
// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
/*int main(){
    int n;
    printf("Enter the no:");
    scanf("%d",&n);

    n=n/10;
    n=n*10;
    printf("%d",n);
    return 0;
}*/

// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
/*int main()
{
    int n, d;
    printf("Enter the number ");
    scanf("%d", &n);
    printf("Enter the Digits:\n");
    scanf("%d", &d);
    if (d != 0)
    {
        printf("Result of no is %d", n * 10 + d);
    }
    else
        printf("Result of no is %d", n);
  return 0;
}*/

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
/*int main(){
float USB;
float INR;
printf("Enter the value of INR:\n");
scanf("%f",&INR);
USB=INR/76.23;
printf("Converted USB is %f",USB);
return 0;
}*/
// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right
/*int main()
{
    int n, r;
    int s;
    printf("Enter The three digits no:");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        s = s * 10 + r;
        
    }
    printf("The rotate number is %d", s);
   return 0; 
}*/