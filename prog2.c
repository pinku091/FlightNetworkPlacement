#include<stdio.h>
#include<stdlib.h>

int m, n;

int main()
{

printf("Welcome! if you know what this program does then...\nEnter the value of m: ");
scanf("%d", &m);
printf("\nEnter the value of n: ");
scanf("%d", &n);

int count=0, temp=0, temp1, array[m-1], count1=0;

if(m<=n)
{
printf("Invalid input.\nChoose m>n");
}

else
{
printf("\nIntially:");
while(temp<m)
{
	array[temp]=temp+1;
	temp1=array[temp];
	printf("\n %d", temp1);
	temp++;
}

temp=-1;
printf("\n");

while(count1<m)
{
	if(array[temp+1]==-1)
                temp++;
        else{
                temp++;
		count++;
        }

       if(temp==m)
        {
                temp=-1;
        }

      if(count==n)
        {
		if(temp==-1)
			temp++;
			if(array[temp]==-1){
				temp++;
		//		printf("\nhere\n");
			}
			
                count=0;
                temp1=array[temp];
                printf("\n%d deleted", temp1);
                array[temp]=-1;
                count1++;
        }
}
printf("\n\nFinally, the winner is ");
temp=0;
while(temp1==-1)
{
	temp1=array[temp];
	temp++;
}
printf("%d\n\n", temp1);
}
}

