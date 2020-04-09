/*Write a program for Infix To Postfix Conversion Using Stack*/
 
 
#include<stdio.h>
char stack[20];
int top = -1;
void push(char x)                  /*inserting element in stack*/
{
    stack[++top] = x;
}
 
char pop()                         /*removing element from stack*/
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
 
int priority(char x)                      /*know the priority of the characters to convert infix to postfix*/
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
 
main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))                       /*checks wheather a character is a letter or a number*/
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}
