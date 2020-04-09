/*Write a c program to reverse a string using stack?*/
 
#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int top,stack[max];  
  
void push(char c){           /*inserting element in stack*/
  
      
      if(top == max-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=c;  
      }  
  
}  
  
void pop(){                     /*removing the element from stack*/
  
      printf("%c",stack[top--]);  
}  
  
  
main()  
{  
   char str[]="Mango is a fruit.";              /*defining a string*/
   int len = strlen(str);              /*finding the length of the string*/
   int i;  
  
   for(i=0;i<len;i++)                /*inserting the elements of the string in stack*/
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();                 /*removing the elements from the stack in reverse order*/
} 
