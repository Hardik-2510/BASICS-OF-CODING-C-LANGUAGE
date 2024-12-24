#include<stdio.h>

int main(){
     int a[3][3] , b[3][3] , c[3][3] ;

     printf("Enter Matrix-1 : \n");
     for (int i = 0; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
          scanf("%d" , &a[i][j]);
          }
     }

     printf("Enter Matrix-2 : \n");
     for (int i = 0; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
          scanf("%d" , &b[i][j]);
          }
     }

     for (int i = 0; i < 9 ; i++){
          for(int j = 0 ; j < 9 ; j++){
          c[i][j] = a[i][j] * b[j][i] ;
          }
     }

     for(int i = 0 ; i < 9 ; i++){
          for(int i = 0 ; j < 9 ; j++){
               
          }
     }

     printf("Matrix-1 + Matrix-2 : \n");
     for (int i = 0; i < 3 ; i++){
          for(int j = 0 ; j < 3 ; j++){
          printf("%d " , c[i][j]);
          }
          printf("\n");
     }
}