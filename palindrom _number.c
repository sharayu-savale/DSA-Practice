#include<stdio.h>
int main (){ 
int num, original ,reverse = 0,remainder;

printf("enter 5 digit number \n");
scanf("%d",&num);

if(num>99999 || num<10000){
printf("please enter only 5 digit number \n");
return 0;
}
original = num;
while(num !=0){
 remainder = num % 10;
 reverse = reverse *10 + remainder;
num = num/10;
} 
if(original==reverse){
  printf("%d is a palindrome number \n",original);
    }
else {
 printf("%d is not a palindrome number \n",original);
    }
return 0;
  }



