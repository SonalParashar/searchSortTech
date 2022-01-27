#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10000

void selecsort(int *a, int n)
{
	int i,j,temp, compare=0, swap=0;
	for(i=0;i<n-1;i++)
	{
		int min = i;
		for(j=i+1; j<n; j++)
		{
			if(*(a+j) < *(a+min))
			{
				min=j;
				compare++;
				
			}
		}
		
				temp = *(a+min);
				*(a+min) = *(a+i);
				*(a+i) = temp;
				swap++;
				
				
				
				printf("\n Pass %d : ", i+1);
        		for (j=0; j<n; j++)
				{
            		printf("\t%d", *(a+j));
            	}
            	
	}
	printf("\n\n\tNumber of comparisons: %d\n\tNumber of swap: %d\n\n", compare,swap);
	//return 0;
}
int main()
{
	int n,i,count,compare, arr[max];
	printf(" Enter size of array: ");
	scanf("%d", &n);
	
	srand(time(0));
    for(i=0;i<n;i++)
	{
        arr[i] = rand()%100;
    } 
    
    
    printf("\n Array before sorting: ");
    for(i=0;i<n;i++)
    {
    	printf("\t%d", *(arr+i));
	}
	printf("\n");

	 selecsort(arr, n);

	printf("\n\n Array after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d", *(arr+i));
	}
	printf("\n");
	return 0;
}
