#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void swap_max(int arr[], int l, int n){
int max=0;
int max_pos;
for (int i = n; i<l ; i++){
 if( arr[i] > max) {
  max= arr[i];
  max_pos=i;
  }
  }
  
  int temp;
 temp = arr[max_pos];
  arr[max_pos]=arr[n];
  arr[n]=temp;
  }
 

void ssort(int arr[], int l){
for (int i =0 ; i<= l-1 ; i++){
   swap_max(arr,l,i);
   }
   }
