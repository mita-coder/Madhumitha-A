#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1;
printf("Enter the size of stack[max=100]:");
scanf("%d",&n);
printf("Stack operation using array");
printf("\n\t1.Push\n\t 2.Pop\n\t 3.Display\n\t 4.Exit");
do
{
printf("\nEnter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t Exit point");
break;
}
default:
{
printf("\n\t Please enter a valid choice(1\2\3\4)");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tStact is over flow");
}
else
{
printf("\nEnter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\tStack is under flow");
}
else
{
printf("\n\t The poped element is %d",stack[top]);
top--;
}
}
void display()
{
if (top>=0)
{
printf("\nThe elements in stack\n");
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
printf("\n Press next choice");
}
else
{
printf("\nThe stack is empty");
}
}


