// Assignment - 12 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Recursion in C Language
// 1. Write a recursive function to print first N natural numbers
#include <stdio.h>
/*void printN(int n);
int main(){
    int n;
printf("Enre the no ");
scanf("%d",&n);
 printN(n);
}
void printN(int x){
    if(x>0){
        printN(x-1);
        printf("%d ",x);
    }
}*/
// 2. Write a recursive function to print first N natural numbers in reverse order
/*void printN(int n);
int main()
{
    int n;
    printf("Enre the no ");
    scanf("%d", &n);
    printN(n);
}
void printN(int x)
{
    if (x > 0){
   
    printf("%d ", x);
    printN(x-1);
  }
}*/
// 3. Write a recursive function to print first N odd natural numbers
/*void printOddN(int n){
if(n>0){
    printOddN(n-1);
    printf("%d ",2*n-1);
}
}
void printOddN(int);
int main(){
    int x;
    printf("Enter the value of N:");
    scanf("%d",&x);
    printOddN(x);
}*/
// 4. Write a recursive function to print first N odd natural numbers in reverse order
/*void printOddNrevers(int n){
if(n>0){
   
    printf("%d ",2*n-1);
     printOddNrevers(n-1);
}
}
void printOddNrevers(int);
int main(){
    int x;
    printf("Enter the value of N:");
    scanf("%d",&x);
    printOddNreverse(x);
}*/
// 5. Write a recursive function to print first N even natural numbers
/*void printEvenN(int n){
if(n>0){
  printEvenN(n-1);
  printf("%d ",2*n);
}
}
void printEvenN(int); 
int main(){
    int x;
    printf("Enter the value of N:");
    scanf("%d",&x);
    printEvenN(x);
} */

// 6. Write a recursive function to print first N even natural numbers in reverse order
/*void printEvenNrevers(int n){
if(n>0){
 
  printf("%d ",2*n);
   printEvenNrevers(n-1);
}
}
void printEvenNrevers(int); 
int main(){
    int x;
    printf("Enter the value of N:");
    scanf("%d",&x);
    printEvenNrevers(x);
} */
// 7. Write a recursive function to print squares of first N natural numbers
/*void squareOFn(int n){
    if(n>0){
    squareOFn(n-1);
    printf("%d ",n*n);
    }
}
void squareOFn(int);
int main(){
    int x;
    printf("Enter the value of N");
    scanf("%d",&x);
    squareOFn(x);
}*/
// 8. Write a recursive function to print binary of a given decimal number
/*void BinaryToDecimal(int n){
   if(n%10){
   BinaryToDecimal(n/2);
   printf("%d",n%2);
}
}
void BinaryToDecimal(int);
int main(){
    int x;
    printf("Enter the no ");
    scanf("%d",&x);
    BinaryToDecimal(x);
}*/
// 9. Write a recursive function to print octal of a given decimal number
/*void DecimalTOoctal(int n){
    if(n%10>0){
        DecimalTOoctal(n/8);
        printf("%d",n%8);
    }
}

void DecimalTOoctal(int);
int main(){
    int x;
    printf("Enter the no :");
    scanf("%d",&x);
    DecimalTOoctal(x);
}*/
// 10. Write a recursive function to print reverse of a given number
/*void reversOFn(int n){
    
    if(n%10>0){
     
   printf("%d",n%10);
   reversOFn(n/10); 
     
     
       
    }
} 

void reversOFn(int);

int main(){
    int x;
    printf("Enter the value of N");
    scanf("%d",&x);
    reversOFn(x);
}*/