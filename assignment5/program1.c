/*
Write a C program to implepment a menu driven basic calculator of the operations: Addition, Substraction, Multiplication, Division and Modulus using Switch-case and loop.
*/

#include <stdio.h>

int main()
{
    int num1, num2, flag;
    char ch, yn;
    flag = 1;
    while(flag)
    {
        printf("Select your operator (+,-,*,/,%): ");
        scanf(" %c", &ch);
        printf("Enter the first operand: ");
        scanf("%d", &num1);
        printf("Enter the second operand: ");
        scanf("%d", &num2);
        switch(ch)
        {
            case '+':
            printf("The result of (%d + %d) = %d", num1, num2, num1 + num2);
            break;
            
            case '-':
            printf("The result of (%d - %d) = %d", num1, num2, num1 - num2);
            break;
            
            case '*':
            printf("The result of (%d * %d) = %d", num1, num2, num1 * num2);
            break;
            
            case '/':
            if(num2 != 0)
              printf("The result of (%d / %d) = %d", num1, num2, num1 / num2);
            else
              printf("Error: Division by zero not possible!");
            break;
            
            case '%':
            printf("The result of (%d %% %d) = %d", num1, num2, num1 % num2);
            break;
            
            default:
            printf("Enter correct operator!");
            break;
        }
        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c", &yn);
        if(yn == 'N' || yn == 'n')
        {
            flag = 0;
        }
    }
    return 0;
}