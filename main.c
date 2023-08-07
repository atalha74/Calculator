#include <stdio.h>

int main() {
    char opr;
    float num1,num2,answr;
    printf("please choose an operator\n+ \n-\n*\n/");
    scanf("%c",&opr);
    printf("please type the operands");
    scanf("%f%f",&num1,&num2);
    switch (opr) {
        case '+': answr = num1 + num2;
            break;
        case '-': answr = num1 - num2;
            break;
            break;
        case '*': answr = num1 * num2;
            break;
        case '/': answr = num1 / num2;
            break;
        default: printf(" Invalid Operator ");
    }
    printf("The value = %f", answr);
        
    }



