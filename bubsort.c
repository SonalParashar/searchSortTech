#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10000

void bubsort(int *arr, int n)
{
	int temp,i,j, swap=0, compare=0;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if (*(arr+j) > *(arr+j+1))
			{
				temp = *(arr+j);
        		*(arr+j) = *(arr+j+1);
        		*(arr+j+1) = temp;
				swap++;

			}
		}
		
		printf("\n Pass %d : ", i+1);
        		for (j=0; j<n; j++)
				{
            		printf("\t%d", *(arr+j));
            	}
					
	}
}

int main()
{
	int size, i;
	int arr[max];
	printf(" enter the size of array: ");
	scanf("%d", &size);
	
	srand(time(0));
    for(i=0;i<size;i++)
	{
        arr[i] = rand()%100;
    }
    
    
    printf("\n");
    printf(" Array before sorting: ");
    for(i=0;i<size;i++)
	{
		printf(" %d\t",*(arr+i));
    }
    
    bubsort(arr, size);
    
    
    printf("\n\n Array after sorting: ");
    for(i=0;i<size;i++)
	{
		printf(" %d\t",*(arr+i));
    }
    printf("\n");
    return 0;
    
}
