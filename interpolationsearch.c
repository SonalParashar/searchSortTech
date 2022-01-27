#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10000

int interpolation_search(int *, int ,int );
void bubsort(int *arr, int n)
{
	int temp,i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if (*(arr+j) > *(arr+j+1))
			{
				temp = *(arr+j);
        		*(arr+j) = *(arr+j+1);
        		*(arr+j+1) = temp;
			}
		}
		/*
		printf("\n Pass %d : ", i+1);
        		for (j=0; j<n; j++)
				{
            		printf("\t%d", *(arr+j));
            	}
				*/		
	}
}


int main()
{
    int arr[max], i, n, data, key;

    printf("\n Enter size of array: ");
    scanf("%d", &n);
    srand(time(0));
    for(i=0;i<n;i++)
	{
        arr[i] = rand()%100;
    }
    key = rand()%100;

    printf("\n");

    printf("\n\tArray before sorting:");
    for(i=0;i<n;i++)
	{
        printf("\t%d", *(arr+i));
    }

    bubsort(arr, n);
	printf("\n\n");

    printf("\n\tArray after sorting:");
    for(i=0;i<n;i++)
	{
        printf("\t%d", *(arr+i));
    }

    printf("\n Key is %d: ",key);
    
    // data if present or not
    data= interpolation_search(arr,n,key);
    if(data!= -1)
	{
        printf("\n %d is placed in position %d. \n", key, data+1);
    }
    else
	{
        printf("\n %d NOT FOUND\n", key);
    }
    return 0;
}
int interpolation_search(int *a,int n,int key)
{
	int lb,ub,mid;
	lb=0;
	ub=n-1;
    while((lb<=ub) && (key>=*(a+lb)) && (key<=*(a+ub)))
	{
        mid= lb+(key-*(a+lb))*(ub-lb) / (*(a+ub)-*(a+lb));
        if (key == *(a+mid))
        {
        	  return mid;
		}
        else if (key < *(a+mid))
        {
        	ub = mid - 1;
		}  
        else
        {
        	lb = mid + 1;
		}   
    }
 return -1;
}
