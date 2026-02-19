#include <stdio.h>
#include <math.h>
// question 6
int main(){
    int x,y;
    x=6;
    y=10;
    if(x==y){
        printf("numbers are equal");
    }else{
        printf("numbers are not equal");
    }
    //question 7
    printf("enter 3 numbers ");
    int x,y,z;
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y && x>z){
        printf("the greatest number is %d",x);
    }else if(y>z && y>x){
         printf("the greatest number is %d",y);
    }else{
         printf("the greatest number is %d",z);
    }

    //question 8
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("entered year is a leap year");

    }else{
        printf("entered year is not a leap year");
    }
    return 0;

    //question 12
    int n;
    printf("enter the number to be added");
    scanf(" %d", &n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum is %d", sum);
}
//question 13
    int n;
    printf("enter the factorial number");
    scanf(" %d", &n);
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;

    }
    printf("the factorial is %d", fact);
}
