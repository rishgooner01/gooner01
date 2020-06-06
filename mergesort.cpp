#include<stdio.h>
#include<stdlib.h>
#define N 10
void mergesort(int *a,int *b,int i,int j);
int main()
{
	int a[N],b[N];
	int i;
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	mergesort(a,b,0,N-1);
	for(i=0;i<N;i++)
	printf("%d\n",a[i]);
	return 0;
}
void mergesort(int *a,int *b,int i,int j)
{
	if(i>=j)
	return;
	int mid=(i+j)/2;
	mergesort(a,b,i,mid);
	mergesort(a,b,mid+1,j);
	int lp=i;
	int rp=mid+1;
	int k;
	for(k=i;k<=j;k++)
	{
		if(lp==mid+1)
		{
			b[k]=a[rp];
			rp++;
		}
		else if(rp==j+1)
		{
			b[k]=a[lp];
			lp++;
		}
		else if(a[lp]<a[rp])
		{
			b[k]=a[lp];
			lp++;
		}
		else
		{
			b[k]=a[rp];
			rp++;
		}
	}
	for(k=i;k<=j;k++)
	a[k]=b[k];
}
