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
		while(temp<m)		//Assigning and printing values associated with each kid
		{
			array[temp]=temp+1;
			temp1=array[temp];
			printf("\n %d", temp1);
			temp++;
		}  //end while

		temp=-1;
		printf("\n");

		while(count1<m)
		{
			if(array[temp+1]==-1)  //if the kid is out of the game, count past him
                		temp++;
        		else{
                		temp++;
				count++;	//to count upto 'n'
        		} //end else

       			if(temp==m)	//counting circularly
        	        	temp=-1;
        	

      			if(count==n)	//eliminate the nth kid
        		{
				if(temp==-1)
					temp++;
					if(array[temp]==-1){
						temp++;
					} //end if
			
               			count=0;
                		temp1=array[temp];
                		printf("\n%d deleted", temp1);
                		array[temp]=-1;
                		count1++;	//counts the number of kids eliminated
        		}  //end if
		} //end while

		printf("\n\nFinally, the winner is ");
		temp=0;

		while(temp1==-1)
		{
			temp1=array[temp];
			temp++;
		}//end while

		printf("%d\n\n", temp1);

	} //end else
}//end main


