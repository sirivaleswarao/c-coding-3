#include<stdio.h>
int main(){
int n;
printf("Enter n value:");
scanf("%d",&n);
if(n%9==0){
printf("final sum single digit=%d",9);
}
else{
    printf("final sum single digit=%d",(n%9));
}
}
