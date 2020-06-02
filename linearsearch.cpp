#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	for(i=0;i<N;i++)
	{
		if(a[i]==x)
		{
			printf("%d found at %dth location",a[i],i);
			exit(0);
		}
	}
	printf("element not present in array");
	return 0;
}
