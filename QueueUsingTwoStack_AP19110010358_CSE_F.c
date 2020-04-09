/*Write a C Program to Implement Queue Using Two Stacks*/

#include <stdio.h>
#include <stdlib.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();
int stack1[100], stack2[100];           /*declaring two stacks*/
int top1 = -1, top2 = -1;
int count = 0;
int main()
{
    int choice;
    printf("\nQUEUE USING STACKS IMPLEMENTATION\n\n");
    printf("\n1.ENQUEUE");
    printf("\n2.DEQUEUE");
    printf("\n3.DISPLAY");
    printf("\n4.EXIT");
    printf("\n");
    create();
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice...Try again !!\n");
        }}}
void create()
{
    top1 = top2 = -1;
}
void push1(int data)               /*inserting element in stack*/
{
    stack1[++top1] = data; 
}
int pop1()                               /*removing element from stack*/
{
    return(stack1[top1--]); 
}
void push2(int data)
{
    stack2[++top2] = data; 
}
int pop2()
{
    return(stack2[top2--]); 
}
void enqueue()                     /*entering element in queue*/
{
    int num, i;
    printf("Enter the data : ");
    scanf("%d", &num);
    push1(num); 
    count++;
}
void dequeue()                   /*removing element from queue*/
{
    int i;
    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    pop2(); 
    count--;
    for (i = 0;i <= count;i++)
    {
        push1(pop2()); 
    }}
void display()                       /*displaying queue*/
{
    int i;
    if(top1 == -1)
    {
        printf("\nEMPTY QUEUE\n");
    }
    else
    {
        printf("\nQUEUE ELEMENTS : ");
        for (i = 0;i <= top1;i++)
        {
            printf(" %d ", stack1[i]);
        }
        printf("\n");
}}