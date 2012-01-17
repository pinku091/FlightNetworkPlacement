#include<stdio.h>
#include<stdlib.h>

int stack[9];
int top=-1;	//index of the most recently inserted number
int top_value=66; //value of the most recently inserted number
int p=0;	//checking for valid PUSH operations

int main()
{

void push(int);
void printstack();

int pop();
int valid=1, i, j=0, num;
int a[10], b[10];

printf("        Welcome to MyStack!\nInsert an array of numbers between 0-9 in the stack to check the validity of the sequence.\nTo exit the program, press Ctrl+C.\n\nInsert ten one-digit numbers without repeating any of the numbers.\nHit return for each insertion. Your input here: \n");

for(i=0; i<10; i++){
scanf("%d", &a[i]);
}

for(i=0; i<10; i++){
printf("%d", a[i]);}

while(valid=1)
{
for(j=0; j<9; j++)
{
	for(i=0; i<a[j]+1; i++)
		push(i);
	b[j]=pop();
//	printstack();
	
	if(a[j+1]<a[j] && a[j+1]!=a[j]-1)
		valid=0;
	else if (a[j+1]==a[j]-1)
		b[j+1]=pop();
	else if (a[j+1]>a[j])
		for(i=p; i=a[j]; i--)
			b[j+i]=pop();
		for(i=a[j]+1; i<a[j+1]+1; i++)
			push(i);
//	printstack();
}
		return;
  //end for 
} //end of  outer while
printf("\n\nInvalid sequence.\n");

}               //end of main


void push(int input)
{

if(top>10)
       {
       printf("\nSTACK FULL!");
       return;
       }
else if(top==-1)
	{
	top++;
	stack[top]=input;
	top_value=stack[top];
	printf("\nPUSH%d\n%d\n",input,p);
	p++;
	return;
	}
else if(input==p)  
	{
	top++;
	stack[top]=input;
	top_value=stack[top];
	printf("\nPUSH%d\n%d\n",input,p);
	p++;
	return;
	}
else
	{
	printf("\nInvalid input. Numbers can only be inserted in ascending sequence only.\n");
	return;
	}
}

int pop()
{

int output;

if(top<0)
	{
	printf("\nSTACK EMPTY");
	return 0;
	}
else
	{
	output=stack[top];
	top--;
	top_value=stack[top];
	printf("\nPOP%d\n",output);
	}
return(output);
}

void printstack()
{
int j=-1,k=0;

while(j<top)
{	
	j++;
	k=stack[j];
	printf("\n %d", k);
}
printf("\n");
}
