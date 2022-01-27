#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10000

void insertsort(int *a, int n)
{
	int temp,i,j,swap=0, compare=0;
	for(i=1;i<n;i++)
	{
		temp=*(a+i);
		j=i-1;
		while(j>=0 && *(a+j) > temp)
		{
			*(a+j+1) = *(a+j);
			j--;
			compare++;
		}
		*(a+j+1) = temp;
		swap++;
	
		printf("\n Pass %d : ", i);
        		for (j=0; j<n; j++)
				 {
            		printf("\t%d", *(a+j));
            	}
    
	}printf("\n\n\tNumber of comparisons: %d\n\tNumber of swap: %d\n\n", compare,swap);
}
int main()
{
	int i,n,arr[max];
	printf(" Enter the size of array: ");
	scanf("%d", &n);
	
	srand(time(0));
	for(i=0; i<n; i++)
	{
		arr[i]=rand()%100;
	}
	
	printf("\n Array before sorting: ");
	for(i=0; i<n; i++)
	{
		printf("\t%d", *(arr+i));
	}
	printf("\n");
	
	insertsort(arr, n);
	printf("\n\n Array after sorting: ");
	for(i=0; i<n; i++)
	{
		printf("\t%d", *(arr+i));
	}
	printf("\n");
	return 0;
	
}
