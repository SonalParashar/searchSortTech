#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10000

int partition(int *ary, int lb, int ub)
{
	int i,j,pvt,temp;
	pvt = *(ary+ub);
	i=(lb-1);
	for(j=lb; j<=ub-1; j++)
	{
		if(*(ary+j) <= pvt)
		{
			i++;
			temp= *(ary+i);
			*(ary+i)= *(ary+j);
			*(ary+j)= temp;
		}
	}
			temp= *(ary+i+1);
			*(ary+i+1)= *(ary+ub);
			*(ary+ub)= temp;
			
			return (i+1);
			
}
void quicksort(int *a,int lft, int rgt)
{
	int pivot;
	if(lft<rgt)
	{
		pivot= partition(a,lft,rgt);
		quicksort(a, lft, pivot-1);
		quicksort(a, pivot+1,rgt);
	}
}

int main()
{
	int n,i,arr[max]={1, 7, 3, 2, 0, 5, 0, 8};
	printf("\n Enter the size of array: ");
	scanf("%d", &n);
	/*
	srand(time(0));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	*/
	
	printf("\n Array before sorting: ");
	for(i=0;i<n;i++)
	{
		printf(" %d\t", *(arr+i));
	}
	printf("\n");
	
	quicksort(arr,0,n-1);
	printf("\n Array after sorting: ");
	for(i=0;i<n;i++)
	{
		printf(" %d\t", *(arr+i));
	}
	printf("\n");
	return 0;
}
