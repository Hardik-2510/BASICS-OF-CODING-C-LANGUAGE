#include<stdio.h>

int main(){
     int size;
     printf("Enter An Array Size : ");
     scanf("%d" , &size);

     int a[size];

     printf("Enter a Array Elements : ");
     for (int i = 0; i < size ; i++)
     {
          scanf("%d" , &a[i]);
     }

     printf("Entered Array : ");
     for (int i = 0; i < size ; i++)
     {
          printf("%d " , a[i]);
     }

     for(int i = 0 ; i < size ; i++){
          for(int j = i + 1 ; j < size ; j++){
               if(a[i] > a[j]){
               int temp = a[i];
               a[i] = a[j] ;
               a[j] = temp;
               }


          }
     }

     printf("\nSorted Array  : ");
     for (int i = 0; i < size ; i++)
     {
          printf("%d " , a[i]);
     }
}