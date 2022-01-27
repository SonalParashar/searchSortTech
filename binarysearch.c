#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10000

int binary_search(int *, int ,int ,int );
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
// random enteries
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
		printf("\t%d\t",*(arr+i));
    }
    
    bubsort(arr, n);
	printf("\n\n");
	printf("\tArray after sorting:");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",*(arr+i));
    }

    printf("\n Key is %d: ",key);
    
    data= binary_search(arr,0,n-1,key);
    if(data!=-1)
	{
        printf("\n %d is placed in position %d\n", key, data+1);
    }
    else
	{
        printf("\n %d NOT FOUND\n", key);
    }
    return 0;
}
int binary_search(int *arr,int lft,int rgt,int key)
{
	int mid;
	while(lft<=rgt)
	{
		mid=lft + (rgt-lft)/2;
		if(key==*(arr+mid))
		{
			return mid;
		}
		else if(key<*(arr+mid))
		{
			rgt=mid-1;
		}
		else
		{
			lft=mid+1;
		}
	}
	return -1;
}

