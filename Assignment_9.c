// Assignment - 9       // Switch Case Problems
// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include <stdio.h>
#include <stdlib.h>
/*int main(){
    int month;
    printf("Enter the value of month:");
    scanf("%d",&month);
    switch (month)
    {
    d case 1:
        printf("%d day in this month and The name of this month is january ",31);
        break;
    case 2:
        printf("%d (Leap year %d) day in this month and The name of this month is feburary ",28,29);
        break;
    case 3:
        printf("%d day in this month and The name of this month is March",31);
        break;
    case 4:
        printf("%d day in this month and The name of this month is Aperil ",30);
        break;
    case 5:
        printf("%d day in this month and The name of this month is May ",31);
        break;
    case 6:
        printf("%d day in this month and The name of this month is jun ",30);
        break;

    case 7:
        printf("%d day in this month and The name of this month is july ",31);
        break;
    case 8:
        printf("%d day in this month and The name of this month is Agust ",31);
        break;
    case 9:
        printf("%d day in this month and The name of this month is septemper ",30);
        break;
    case 10:
        printf("%d day in this month and The name of this month is October ",31);
        break;
    case 11:
        printf("%d day in this month and The name of this month is November ",30);
        break;
    case 12:
        printf("%day in this month and The name of this month is December ",31);
        break;
    default:
        break;
    }
}*/
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
/*#include<stdlib.h>
int main(){
    int n,a,b,c;
 while(1){
    printf("\nEnter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d",&n);


    switch (n)
    {
    case 1:
         printf("Enter the value of a and b :");
         scanf("%d%d",&a,&b);
         c=a+b;
         printf("Addition of %d and %d is %d",a,b,c);

        break;

    case 2:
         printf("Enter the value of a and b :");
         scanf("%d%d",&a,&b);
         c=a-b;
         printf("Subtraction of %d and %d is %d",a,b,c);

        break;
    case 3:
         printf("Enter the value of a and b :");
         scanf("%d%d",&a,&b);
         c=a*b;
         printf("Multiplication of %d and %d is %d",c,b,c);

        break;
    case 4:
         printf("Enter the value of a and b :");
         scanf("%d%d",&a,&b);
         if(b!=0){
         c=a/b;
         printf("Division of %d and %d is %d",a,b,c);
         }
         else
         printf("Enter the correct value of a and b");
        break;
    case 5:
         exit(0);
    default:
        printf("Chose any one case");
        break;
    }
 }
}*/
// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
/*int main()
{
    int n;
    printf("Enter the  Day number:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("hi");
        break;
    case 2:
     {
     printf("Hello");
     break;
     }
    case 3:
    {
     printf("Good morning");
     break;
     }
     case 4:
     {
       printf("Good After noon");
       break;
     }
    case 5:
    {
       printf("good by");
       break;
    }
    case 6:
    {
      printf("goot");
      break;
    }
    case 7:
    {
     printf("shot");
     break;
     }
    }

}
*/
// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
/*int main(){
    int n,a,b,c;
 while (1)
    {



    printf("\nEnter  your choice wtt do you want to:\n1.isoscales\n2.Right Angle\n2.equilatral trangle");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter the value of a and b c");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b||b==c||c==a)
        printf("This is isoscaler Triangle");
        else
        printf("Not a isoscaler tranfile");
        break;

    case 2:
    printf("Enter the value of a and b c");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a==(b*b+c*c)||(a*a+b*b)==c*c|| b*b==(a*a+c*c))
        printf("This is Right angle Triangle");
        else
        printf("Not a riget angle tranfile");
        break;
    case 3:

        printf("Enter the value of a and b c");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b&&b==c)
        printf("This is equal Triangle");
        else
        printf("Not a equal tranfile");
        break;
    case 4 :
        exit(0);
    default:
        break;
    }
}}*/
// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");
/* int main(){
   int var;
   printf("Enter the value of var\n");
   scanf("%d",&var);
   switch (var)
   {
   case 1:
    printf("good");
    break;
   case 2:
    printf("better");
    break;
   case 3:
    printf("best");
    break;
   default:
   printf("invalid");
    break;
   }
 }*/
// 6. Program to check whether a year is a leap year or not. Using switch
// statement
/*int main()
{
    int year;
    printf("Enter the value of year:");
    scanf("%d", &year);
    switch (year % 100 != 0)
    {
    case 0:
        switch (year % 400 == 0)
        {
        case1:
            printf("leap year");
            break;
        case 0:
            printf("not a leap year");
            break;
        }

    case 1:
    
        switch (year % 4==0)
        {
        case 1:
            printf("leap year");
            break;
        case 0:
            printf("not a leap  year");
        }
    
    
  }
 }*/
    // 7. Program to take the value from the user as input electricity unit charges
    // and calculate total electricity bill according to the given condition . Using
    // the switch statement.
    // For the first 50 units Rs. 0.50/unit
    // For the next 100 units Rs. 0.75/unit
    // For the next 100 units Rs. 1.20/unit
    // For units above 250 Rs. 1.50/unit
    // An additional surcharge of 20% is added to the bill.

    // 8. Program to convert a positive number into a negative number and negative
    // number into a positive number using a switch statement.
/*int main(){
    int n;
    printf("Enter the no");
    scanf("%d",&n);
    switch(n>=0)
    {
        case 0:
        printf("%d",-1*n);
        break;
        case 1:
        printf("%d",-1*n);
        
    }
}*/
    // 9. Program to Convert even number into its upper nearest odd number
    // Switch Statement.
 /*int main(){
    int n;
    printf("Enter the no");
    scanf("%d",&n);
    switch(n%2==0){
    case 1:
    printf("%d is nearest even no",n+1); 
    break;
    case 0:
    printf("%d",n);}
 }*/
    //  10. C program to find all roots of a quadratic equation using switch case
/*#include<math.h>
int main(){
    int a,b ,c,d;
float x,y,x1,D;
printf("Enter the cofficeant of x^2,x,const");
scanf("%d%d%d",&a,&b,&c);

d=(b*b)-(4*a*c);

    switch( d>0){
        case 1:
        printf("roots are real and discting:\n");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("x is %f\n",x);
        printf("y is %f",y);
        break;
        case 0:
            switch(d<0){
             case 1:
                 printf("bothe root are imaginori");
                 break;
             case 0:
                 {
                         printf("Both roots are equal:");
                     x1=-b/(2*a);
                     printf("%f is",x1);
                 }
                 
             }
    }
}*/