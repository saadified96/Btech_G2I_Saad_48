#include <stdio.h>
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
}
