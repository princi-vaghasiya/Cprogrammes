#include<stdio.h>
void main(){
    int sum,a,i=1;
    printf("enter a");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        if(a%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==a){
            printf("number is perfect");
        }else{
            printf("number is not perfect");
        }

}