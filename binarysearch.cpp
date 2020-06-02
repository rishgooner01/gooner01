#include<stdio.h>
#include<stdlib.h>
#define N 10
/*Array must be sorted*/
int main()
{
	int a[N];
	int i;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	int f=0;
	int l=N-1;
	int m=(f+l)/2;
	int x;
	scanf("%d",&x);
	while(f<l)
	{
		if(a[m]==x)
		{
			printf("element found at %d location",m);
			exit(0);
		}
		else if(a[m]>x)
		{
			l=m-1;
			m=(l+f)/2;
		}
		else
		{
			f=m+1;
			m=(l+f)/2;
		}
	}
	printf("element not found");
	return 0;
}
