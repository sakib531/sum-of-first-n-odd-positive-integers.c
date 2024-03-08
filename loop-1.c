#include<stdio.h>
int main (){
    int x,y,sum=0;
    printf("input the ammount of odd number : ");
    scanf("%d",&y);
    printf("the odd numbers  : \n");
    for (x=1; x<=y*2; x=x+2){
        printf("%d\n",x);
        sum=sum+x;
    }
    printf("the sum of numbers  : \n");
    printf("%d\n",sum=sum);
    return 0;
}
