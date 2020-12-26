#include<stdio.h>
int main()
{
	int a[100],size,n,i,key;
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
	while(n!=3)
	{
		printf("\nCLICK 1 FOR DELETE FROM BEG\n 2 FOR DELETE A POS\n3 FOR EXIT \n");
		scanf("%d",&n);
		if(n==1)
		{
			for(i=0;i<size-1;i++)
			{
				a[i]=a[i+1];
			}
			size--;
		}
		if (n==2)
		{
			printf("\nenter a position to delete:\n");
			scanf("%d",&key);
			if (key<=size)
			{
			a[key-1]=a[key];
			for(i=key;i<size-1;i++)
			{
				a[i]=a[i+1];
			}
			size--;
		}
			else
			{
				printf("\nenter corrcet position\n");
			}
		}
		for(i=0;i<size;i++)
		printf("%d\t",a[i]);
	}
	printf("\n THANK YOU VISIT AGAIN");
	return 0;
}
