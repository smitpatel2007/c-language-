#include <stdio.h>
int main(){
    int n,i=1;
    printf("enter the  number");
    scanf("%d",&n);
    start:
        printf("%d*%d=%d\n",n,i,n*i);
        i++;

    if(i<=10){
        goto start;
    }
    return 0;
}