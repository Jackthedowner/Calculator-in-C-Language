#include<stdio.h>
#include<conio.h>
void main(){
float x;
float y;
char op;
float result;
printf("Enter the First Value:");
scanf("%f",&x);
printf("Enter the second Value:");
scanf("%f",&y);
printf("Enter the operation:");
scanf(" %c",&op);
switch(op){
case '+':
result = x + y;
printf("result is %f",result);
case '-':
result = x - y;
printf("result is %f",result);
case '*':
result = x * y;
printf("result is %f",result);
case '/':
result = x / y;
printf("result is %f",result);
}
}
   