#include<stdio.h>
void main()
{
	int n,i;
	int flag=0;
	printf("enter the no.");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag++;
			break;
		}
	}
		if(flag==1)
		{
			printf("The no. is not a prime");
	    }
	    else
	    {
	    	printf("The no. is prime");
		}
	
}
