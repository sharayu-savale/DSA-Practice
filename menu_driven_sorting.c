#include <stdio.h>
 void display(int arr[],int n){
    printf("Array: ");
   for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
   }
    printf("\n");
}

//1.Bubble Sort
   void Bubblesort(int arr[],int n){
  for(int i = 0; i<n-1; i++){
    for(int j = 0; j < n-i-1; j++){
      if(arr[j] >arr[j+1]){
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1]=temp;
   }
  }
 }
 printf("Bubble Sort completed! Time:O(n^2)\n ");
}     

//2.Selection Sort
   void SelectionSort(int arr[],int n){
  for(int i = 0; i<n-1; i++){
   int min=i;
    for(int j = i+1; j < n; j++){
      if(arr[j] <arr[min]){
        min = j;
    }
   }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i]=temp;
  
 }
 printf("selection Sort completed! Time:O(n^2)\n ");
}
    

//3.insertion Sort
   void InsertionSort(int arr[],int n){
    for(int i = 1; i<n; i++){
   int key=arr[i];
   int j = i-1;
  
    while(j >= 0 && arr[j] > key)
 {
  arr[j+1] = arr[j];
  j--;
 }
  arr[j+1] = key;
}
 
 printf("insertion Sort completed! Time:O(n^2)\n ");
}
     


int main (){
  int arr[100],n,choice;
 int original[100];

  printf("enter number of elements");
  scanf("%d",&n);
  
  printf("enter %d elements",n);
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
     original[i]=arr[i];
  }  
  
 do{
 printf("\n-------SORTING MENU------- \n");
 printf("Original Array \n");
 display(original,n);

 printf("1.Bubble Sort \n");
 printf("2.Selection Sort \n");
 printf("3.Insertion Sort \n");
 printf("4.Exit \n");

 printf("enter your choice");
 scanf("%d",&choice);

 switch(choice){
     case 1:
             for(int i=0;i<n;i++)
             arr[i]=original[i];

             Bubblesort(arr,n);
             display(arr,n);
             break;
     case 2:

            for(int i=0;i<n;i++)
            arr[i]=original[i];



             SelectionSort(arr,n);
             display(arr,n);
             break;

     case 3:
             for(int i=0;i<n;i++)
             arr[i]=original[i];



             InsertionSort(arr,n);
             display(arr,n);
             break;

     case 4:
            printf("Exit \n");
               break;
  default:
       printf("Invalid choice!\n");
  }
 }while(choice!=4);
  
  return 0;
 }




        


