#include<stdio.h>
int main(){
     
     int s1 , s2 , s3 , s4 , s5 ;
     printf("Enter 5 Subjects Marks : ");
     scanf("%d %d %d %d %d" , s1 , s2 , s3 , s4 , s5);
     int avg = ((s1 + s2 + s3 + s4 + s5)/5) ;
     if (avg >= 80 && avg <= 100){
          printf("You Have Passed With Distinction !");
     }
     else if(avg >= 60 && avg <= 79){
          printf("You Have Passed With First Class !");
     }
     else if(avg >= 59 && avg <= 40){
          printf("You Have Passed With Second Class !");
     }
     else if(avg >= 0 && avg < 40){
          printf("You Have Failed !");
     }
}