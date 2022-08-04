// Assignment - 14 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Array in C Language
// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
#include<stdio.h>
/*int main(){
    int a[10],i,sum=0;
    printf("Enter the value of array Element:");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d is the Sum of Array",sum);
}*/
// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
/*int main(){
    int a[10],i,sum=0;
    printf("Enter the value of array");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    // printf("%d",sum);
    printf("%f%% is the avrage of given no: ",sum/10.0);
    ;
}*/
// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
/*int main(){
    int i,sumEven=0,sumOdd=0,a[10];
    printf("Enter the value of array:\n");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
         sumEven=sumEven+a[i];
        else
         sumOdd=sumOdd+a[i]; 
    }
    printf("%d is the sum of all Even number\n ",sumEven);
    printf("%d is the sum of all odd number \n",sumOdd);
}*/
// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
/*int main(){
 int i,max=0;
 int a[10];
 printf("Enter the value of array element:\n");
 for(i=0;i<=9;i++){
  scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=1;i<=9;i++){
    if(a[i]>max)
      max=a[i];
    
  }
printf("%d is largest element of given array  ",max);   
}*/
// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
/*int main(){
int a[10];
int i ,smallest=0;
printf("Enter the value o f an array");
for ( i = 0; i <=9; i++)
{
    scanf("%d",&a[i]);
}
smallest=a[0];
  for(i=1;i<=9;i++){
    if(smallest>a[i])
     smallest=a[i];
  }  
  printf("%d is the smallest no:",smallest);
}*/
// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
int main(){
int a[5];
int i,j ,min=0,temp;
printf("Enter the value o f an array");
for ( i = 0; i <=4; i++)
{
    scanf("%d",&a[i]);
}

 for(j=0;j<=4;j++){
      min=a[j];
        for(i=j+1;i<=4;i++){
            
          if(min>a[i]){
           temp=a[i];
           a[i]=min;
           min=temp;
           }
        }  
        printf("%d ",min);
 }
}
// 7. Write a program to find second largest in an array.Take array values from the user.
/*int main(){
 int i,a[10],max1,max2;
 printf("Enter the value of an arry:");   
for(i=0;i<=9;i++){
  scanf("%d",&a[i]);
  }
  max1=a[0];
  for(i=1;i<=9;i++){
    if(a[i]>max1){
      max2=max1;
      max1=a[i];
      }
    else if(a[i]>max2)
     max2=a[i];  
  }
printf("%d is the second largest element of given array  ",max2);   
}*
// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.
/*int main(){
 int i,a[10],smallest1,smallest2;
 printf("Enter the value of an arry:");   
for(i=0;i<=9;i++){
  scanf("%d",&a[i]);
  }
  smallest1=a[0];
  for(i=1;i<=9;i++){
    if(a[i]<smallest1){
      smallest2=smallest1;
        smallest1=a[i];

     }
     else if(a[i]<smallest2)
       smallest2=a[i]; 
  }
  printf("%d is the second smallest element of given array  ",smallest2);   
}*/
// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
/*int main(){
    int i,n;
    int a[n];
    printf("Enter the size of an Array:\n");
    scanf("%d",&n);
    printf("Enter the value of an array:\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Array Before reverse:\n");
    for(i=0;i<=n-1;i++){
        
        printf("%d ",a[i]);
    }
     printf("\nArray After reverse:\n");
     for(i=n-1;i>=0;i--){
         
         printf("%d ",a[i]);
     }
}*/
// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
/*int main(){
    int a[5],i,b[5];
    printf("Enter the value of an array:");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    } 
    printf("\nArray of a[] is\n");
    for(i=0;i<=4;i++){
        printf("%d",a[i]);
    } 
     for(i=0;i<=4;i++){
    
        b[i]=a[i];
    
    }
    printf("\nArray of b[] is\n");
        for(i=0;i<=4;i++){
        printf("%d ",b[i]);
    }
}*/