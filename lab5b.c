#include <stdio.h>

int triangle_area(int base ,int height){
    int area;
    area=(base*height)/2;
    printf("the area of triangle is %d\n",area);
}
void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swap num1=%d and num2=%d\n",x,y);
}
float remainder(int a,int b){
    float rem;
    rem= a%b;
    printf("remainder is %f",rem);
}

int main(){
    int num1;
    int num2;
    printf("enter a number:");
    scanf("%d",&num1);
    printf("enter next number:");
    scanf("%d",&num2);

    triangle_area(num1,num2);
    swap(num1,num2);
    remainder(num1,num2);
}