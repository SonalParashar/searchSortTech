#include<stdio.h>
#include<stdlib.h>

int platform(int *,int *,int );
int main()
{
	int i,n,minute,arr[1000],dep[1000],min;
	printf("Enter number of trains:");
	scanf("%d",&n);

	printf("Enter the arrival and departure time for each train :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d:%d",&arr[i],&minute);
		arr[i]=(arr[i]*100)+minute;
		scanf("%d:%d",&dep[i],&min);
		dep[i]=dep[i]*100+min;
	}
	printf("Number of platforms required are %d", platform(arr,dep,n));
}
int platform(int a[],int b[], int n)
{
	int i,nopf,count,j,k;
	nopf=count=j=1;
    k=0;
	for(i=0;i<n;i++)
	{
		if(*(a+j) < *(b+k))
		{
			count++;
            	j++;
		}
		else
		{
			count--;
            	k++;
		}
		if(count>nopf)
		{
			nopf=count;
		} 
	}
	return nopf;
}
