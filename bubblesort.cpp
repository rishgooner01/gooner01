#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	int j,temp;
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	printf("%d\n",a[i]);
	return 0;
}
