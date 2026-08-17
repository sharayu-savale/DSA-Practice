#include<stdio.h>
int fib(int n1,int n2)
{
return n1+n2;
}


int main()
{
  int n1=0,n2=1;
  int res;
  int num=15;
  printf("%d %d\n",n1,n2);
  int i=3;
  while(i<=num){
        res=fib(n1,n2);
        printf("%d\n",res);
        n1=n2;
        n2=res;
        i++;
             }
  
  
return 0;

}

 