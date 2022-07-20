// Assignment - 1 - Input and output in C Languag

#include<stdio.h>
#include<conio.h>

//1. Write a program to print Hello Students on the screen.
int main(){

    printf("Hello student");

//2. Write a program to print Hello in the first line and Students in the second line.
    printf("Hello\n student");
//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes).
    printf("\"MySirG\"");

//prolem 4: WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area 
// & R with radius.
    
    
    int R;
    float A;
    printf("Enter the value of radious:\n");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("The Area of circle is %f having the radious %d",A,R);

// 5. WAP to calculate the length of String using printf function
int x = printf("ineuron");
printf("%d",x);
return 0;



//6. WAP to print the name of the user in double quotes.
//Expected output format – “Hello , Amit Kumar”

printf("\"Hello , Amit Kumar\"");

// 7. WAP to print “%d” on the screen.

// printf("%%d ");

// 8. WAP to print “\n” on the screen.
printf(" \\n");
// 9. WAP to print “\\” on the screen.
// printf(" \\\\");

// 10. WAP to take date as an input in below given format and convert the date format and 
// display the result as given below.
// User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format –
// “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)




int D,M,Y;
printf("\nEinter the value of \"DD/MM/YYYY\"\n");
scanf("%d/%d/%d",&D,&M,&Y);
printf("Day - %d , Month - %d , Year - %d",D,M,Y);

// 11. WAP to take time as an input in below given format and convert the time format and 
// display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”
 
 int H,M;
 printf("Enter the value of time in given format HH:MM\n");
 scanf("%d:%d",&H,&M);
 printf("%d Hour and %d Minute",H,M);


// 12. Find output of below code:
//  int main()
// { 
int x = printf("ineuron");
printf("%d",x);
return 0;
}
