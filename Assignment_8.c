#include <stdio.h>
// 1.
/*
 *
 **
 ***
 ****
 *****
 */
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 2.
/*

 *
 **
 ***
 ****
 *****

 */
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=6-i)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 3.
/*

*****
****
***
**
*

*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=6-i)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 4.
/*

*****
****
***
**
*

*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 5.
/*

     *
    ***
   *****
  *******
 *********

 */
/*int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
                printf("*");
            else
                printf(" ");
        }
         printf("\n");
    }
}
*/

// 6.
/*
*********
*******
*****
***
*
*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=i&&j<=10-i)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }
}
*/
// 7.
/*
**********
****  ****
***    ***
**      **
*        *

*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
            if(j<=6-i||j>=5+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/
// 8.
/*
   1
  121
 12321
1234321
*/

/*int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 4; i++)
    {
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", k);
                j < 4 ? k++ : k--;
            }
            else
                printf(" ");
        }
         printf("\n");
    }
}
*/
// 9.
/*
1234321
 12321
  121
   1

*/
/*int main()
{
    int i, j, k = 0;
    for (i = 1; i <= 4; i++)
    {
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <=8 -i)
            {
                printf("%d", k);
                j < 4 ? k++ : k--;
            }
            else
                printf(" ");
        }
         printf("\n");
    }
}
// 10.
/*
1234321
123 321
12   21
1     1
*/
/*int main(){
    int i,j,k;
      for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j<=5-i||j>=3+i){
            printf("%d",k);
             j <4 ? k++ : k--;
            }
            else{
            printf(" ");
            if(j==4)
            k--;
            }
        }
        printf("\n");
    }

}*/
// 11.
/*  A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
/*int main()
{
    int i, j,k;
    for (i = 1; i <= 5; i++)
    {
         k='A';
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i){
                printf("%c",k);
                j <5 ? k++ : k--;
                }
            else
                printf(" ");
        }
         printf("\n");
    }
}*/
// 12.
/*
ABCDCBA
 ABCBA
  ABA
   A
*/
// 13.
/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         AB
A           A
*/
/*int main(){
    int i,j,k;
    for(i=1;i<=7;i++){

        k='A';
        for(j=1;j<=13;j++){
            if(j<=8-i||j>=6+i){
            printf("%c",k);
             j <7 ? k++ : k--;

            }
            else{
            printf(" ");
            if(j==7)
            k--;
            }
        }
        printf("\n");
    }
}*/
// 14.
/*

*
* *
*   *
*     *
* * * * *
*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==i||i==5)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }
}*/
// 15.
/*
 *
 *  *
 *    *
 *      *
 * * * * *
 */
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==5||j==6-i||i==5)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }
}*/
// 16.
/*

        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j==6-i||j==4+i||i==5)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 17.
/*

* * * * * * * * *
  *           *
    *       *
      *   *
        *

*/
/*int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j==10-i||j==i||i==1)
            printf("*");
            else
            printf(" ");
        }
       printf("\n");
    }

}*/
// 18.
/*
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

*/
/*int main(){
    int i,j,k=0;
    for(i=1;i<=9;i++){
          i<=5?k++:k--;
        for(j=1;j<=9;j++){

            if(j>=6-k && j<=4+k){

                printf("*");

                }
            else
            printf(" ");


        }
       printf("\n");
    }
}     */
// 17.

/*
   *****     *****
  *******   *******
 ********* *********
 ******MysirG*******
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *
 */
 int main()
 {
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
     

   
   

    for (i = 1; i <= 10; i++)
    {    
        for (j = 1; j <= 19; j++)
        {
            if(i==1 && j==6)
                   printf("MysirG");
            if(i==1&&j>=6&&j<=11)
             continue;       
            if (j >= i && j <= 20- i){
                  printf("*");    
            }

            else
                printf(" ");
        }
         printf("\n");
    } 
}