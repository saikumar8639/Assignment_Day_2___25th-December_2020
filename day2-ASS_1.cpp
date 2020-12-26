#include<stdio.h>
int main()
{
	int a[100],size,n,i,j,t,k;
	printf("ENTER SIZE OF THE ARRAY:");
	scanf("%d",&size);
	printf("\nenter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
			for(i=0;i<size;i++)
		printf("%d\t",a[i]);
	while(n!=2)
	{
		printf("\nCLICK 1 FOR ENTER VALUE OF K TO ROTATE ARRAY\n 2  FOR EXIT \n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("\n HOW MANY TIMES DO YOU WANT TO ROTATE ??? \n");
			scanf("%d",&k);
			for(j=0;j<k;j++)
			{
			t=a[0];
			for(i=1;i<size;i++)
			{
				a[i-1]=a[i];
			}
			a[size-1]=t;
			}
		}
		
		for(i=0;i<size;i++)
		printf("%d\t",a[i]);
	}
	printf("\n THANK YOU VISIT AGAIN");
	return 0;
}
