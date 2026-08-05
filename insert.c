#include<stdio.h>
void display( int arr[], int n){
for(int i=0;i<=n;i++)
 {
 printf("%d ",arr[i]);
 }
printf("\n");

}
 int indInsertion( int arr[],int size,int element, int index,int capacity){
   if(size>=capacity)
 {
  return -1;
 }
for(int i=size;i>=index;i--){
 arr[i+1]=arr[i];
  }
arr[index]=element;
  return 1;
}

int main(){
int arr[100]={1,2,3,4,5};
int size = 4,element = 45,index = 3;
display(arr,size);
int capacity=100;
indInsertion(arr,size,element,index,capacity);
size+=1;
display(arr,size);


return 0;
}