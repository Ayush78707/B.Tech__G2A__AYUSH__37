#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter your first operand:");
    scanf("%d",&a);
    printf("Enter your second operand:");
    scanf("%d",&b);
    printf("Enter operators (+,-,*,/):");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Addition = %d",a+b);
        break;
        case '-':
        printf("Subtraction = %d",a-b);
        break;
        case '*':
        printf("Multiplication = %d",a*b);
        break;
        case '/':
        if (b<=0){
            printf("division can not possible ");
        }
        
        else{
            printf("Division = %f",(float)a/b);
        }
        break;
        default:
    {
        printf("Error! Incorrect Operator");
    }
    }
    return 0;
}