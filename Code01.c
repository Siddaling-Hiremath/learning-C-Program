#include <stdio.h>


int a,b;


int main() {
printf("hello\n");
printf("enter your first number:");
scanf("%d",&a);
printf("enter your second number:");
scanf("%d",&b);


int sum =a+b;
int difference =a-b;
int mul =a*b;
float div =(float)b/a;


printf("sum: %d\n",sum);
printf("dif: %d\n",difference);
printf("mul: %d\n",mul);
printf("div: %f\n",div);



return 0;   
}