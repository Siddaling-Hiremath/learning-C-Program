#include <stdio.h>

int main(){
int arr[10],odd=0,even=0;
printf("Enter 10 numbers :\n");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<10;i++){
    if(arr[i]%2!=0){
        odd+=1;
    }
    else{
        even+=1;
    }
}

printf("There are %d odd number\n",odd);
printf("There are %d even number\n",even);

return 0;
}
