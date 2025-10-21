#include <stdio.h>
int main(){
int arr[10],largest,smallest;

printf("Enter your 10 numbers:\n");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
largest=arr[0];
smallest=arr[0];
for(int i=0;i<10;i++){
 if(arr[i]>largest){
    largest=arr[i];
 }
 if(arr[i]<smallest){
    smallest=arr[i];
 }
}

printf("The largest number is: %d",largest);
printf("The smallest number is: %d",smallest);


    return 0;
}