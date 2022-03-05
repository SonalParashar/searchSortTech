#include <stdio.h>
#include <stdlib.h>
#define m 100


int mode_count(int *arr, int n)
{
	int i;
	//sort(arr, arr + n);
 
    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for ( i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
	
}

int main()
{
	int i,n,frequency,arr[m];
	printf(" enter the size of array: ");
	scanf("%d", &n);
	printf(" enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	/*printf(" Array formed: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d", *(arr+i));
	}
	*/
	frequency=mode_count(arr,n);
	printf("\n Mode of array= ", frequency);
	return 0;
}
