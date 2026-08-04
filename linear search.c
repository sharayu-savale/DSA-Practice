include#<stdio.h>
int main()
{
int arr[100],n,key,i;
int *p;
printf("enter size:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter element to search:");
scanf("%d",&key);
p=arr;
for(i=0;i<n;i++)
{
 if(*(p+i)==key)
 {
  printf("element found at position=%d",i+1);
  return 0;
 }
}
printf("element not found");

  




return 0;
}