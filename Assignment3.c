/*Assignment - 3
Decision Control Statements*/
// 1. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
#include <conio.h>
#include <math.h>
/*int main(){
int n;
printf("Enter the no:");
scanf("%d",&n);
if(n>0)
printf("positive no");
else
printf("non Positive no");
}*/
// 2. Write a program to check whether a given number is divisible by 5 or not
/*int main()
{
    int n;
    printf("Enter the no :");
    scanf("%d", &n);
    if (n % 5 == 0)
        printf("%d is divisible by 5");
    else
        printf("%d is not divisible by 5");
    return 0;
}*/
// 3. Write a program to check whether a given number is an even number or an odd number.
/*int main(){
    int n;
    printf("Enter the no :");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is even no ",n);
    else
    printf("%d is odd no ",n);
   return 0;
}*/
// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
/*int main(){
    int n;
    printf("Enter the no :");
    scanf("%d",&n);
    if((n&1)==0)
    printf("%d is even no",n);
    else
    printf("%d is odd no",n);
   return 0;
}*/
// 5. Write a program to check whether a given number is a three - digit number or not.
/*int main(){
    int n,count=0,r;
    printf("enter the no :");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        count++;
    }
    if(count==3)
    printf("%d is three digit no",n);
    else
    printf("%d is note a three digit no",n);
}*/
// 6. Write a program to print greater between two numbers.Print one number of both are the same.
/*int main()
{
    int n,m;
    
    printf("Enteer two number:");
    scanf("%d%d", &n,&m);
    if(n>=m)
    printf("%d is a grater no",n);
    else
    printf("%d is grater no",m);
    
}*/
// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
int main(){
    int a,b ,c;
    float x,y,x1,D;
    printf("Enter the cofficeant of x^2,x,const");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D<0)
    printf("bothe root are imaginori");
    else if (D==0)
    {
        printf("Both roots are equal:");
        x1=-b/(2*a);
        printf("%f is",x1);

    }
    else{
        printf("roots are real and discting:\n");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("x is %f\n",x);
        printf("y is %f",y);

    }

}
// 8. Write a program to check whether a given year is a leap year or not .
/*int main()
{
    int year;
    printf("Enter the yerer:");
    scanf("%d", &year);
    if ((year % 4 ==0&&year%100!=0)||year%400==0)

        printf("%d is leap year:",year);

    else
        printf("%d is not a leap year",year);
 return 0;
}*/
// 9. Write a program to find the greatest among three given numbers.Print number once if the greatest number appears two or three times.
/*int main()
{
    int a, b, c;
    printf("Enter the value of three number:");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)

        printf("%d is gratest number:",a);
    else if (b >= c)

        printf("%d is gratest number:",b);

    else

        printf("%d is gratest no:",c);
}*/
// 10. Write a program which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.
/*int main()
{
    int CP, SP, Profit;
    float PP, LP;
    printf("Enter the cost Price or selling Price:");
    scanf("%d %d", &CP,&SP);
    PP = (SP - CP) * 100 / CP;
    LP = (CP - SP) * 100 / CP;
    if (PP > LP)
        printf("profit percentage:%f%%", PP);
    else if (PP < LP)
        printf(" loss percentage:%f%%", LP);
    else
        printf("profit percentage:%f%% or loss percentage:%f%%", PP, LP);
}*/
// 11. Write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
/*int main()
{
    int a,b,c,d,e;

    printf("Enter the value of sub");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)    
            printf("Passed of examination");
    else
        printf("faild Examination");
}*/
// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
/*int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
     printf("Lowercase");
    else if(ch>='A'&&ch<='Z')
    printf("Uppercase");
   
    

}
*/
// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
    printf("%d is divisible by 3 and divisible by 2",n);
    else
    printf("%d is not divisible by 3 and not divisible by 2",n);
return 0; 
}*/
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*int main(){
    int n;
    printf("Endter the number");
    scanf("%d",&n);
    if(n%7==0||n%3==0)
    printf("%d is divisible by 7 and divisible by 3",n);
    else
    printf("%d is not divisible by 7 and divisible by 3",n);
}*/
//  15. Write a program to check whether a given number is positive, negative or zero.
/*int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>0)
    printf("%d is positive number");
    else if(n<0||n==0)
    printf("negative or zero");
}*/
// 16. Write a program to check whether a given character is an alphabet(uppercase), an alphabet(lower case), a digit or a special character.
/*int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
     printf("Lowercase");
    else if(ch>='A'&&ch<='Z')
    printf("Uppercase");
    else if(ch>='0'&&ch<='9')
     printf("Numbers");
    else
    printf("special character"); 
    }*/
// 17. Write a program which takes the length of the sides of a triangle as an input.Display whether the triangle is valid or not .
/*int main(){
    int a  ,b,c;
    printf("enter the length of sides of a triangle \na,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c || b+c>a || c+a>b)
    printf("valid traingle");
    else
    printf("invalid traingle");
}*/
// 18. Write a program which takes the month number as an input and display number of days in that month.
/*int main(){
    int month_n;
    printf("Enter the month no");
    scanf("%d",month_n);
    if()
}*/

//sir char integer ko kase leta hai aur ye number kase leta hai
// int main(){
// char ch;
// printf("no");
// scanf("%c",&ch);
// if(ch>=45&&ch<=54)
//      printf("Numbers");
// }






















/*int main()
{
    int i = 1;
    int n;

    for (i = 1; i <= 3; i++)
    {
        printf("Enter the even no");
        scanf("%d", &n);

        if (n % 2 == 0)
            break;
    }

    if (i == 4)

        printf("you loss");

    else
        printf("you win");
}
int main(){

    int n,sum=0,i;

    for(i=1;i<=n;i++){
    printf("Enter the  no:");
    scanf("%d",&n);

        if(n==0)
        break;
      sum=sum+n;

    }
    printf("%d is the sum of value",sum);
}*/