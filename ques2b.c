#include<stdio.h>
#include<stdlib.h>
#define max 1000

/* Modify the Selection sort, Bubble sort and Insertion sort algorithms so that,
number of swapping required to sort the elements can be reported to main( ) /
caller function. Apply these modified implementations to the following array and
print the number of comparisons required in each case.*/
int selection_sort(int*, int);
int bubble_sort(int*, int);
int insertion_sort(int*, int);

int main()
{
    int arr[max]={749, 741 ,441, 100, 911, 875 ,123 ,384, 120, 599, 801,180, 942 ,835 ,760 ,701 ,592, 537, 304, 142, 125 ,212 ,612, 225, 58, 13, 733, 688, 357, 948, 988, 990, 602, 819 ,239, 822 ,355 ,126, 867, 70 ,244 ,686, 406 ,840, 650 ,61, 263,890 ,697, 713, 672 ,748, 848 ,460, 628, 980 ,738, 584, 826,388 ,512 ,397, 281, 863, 269, 682, 959, 212, 669, 112, 449,589 ,972 ,333, 486, 82 ,638, 841, 50, 578, 615, 951 ,242,920 ,335, 890, 934, 66, 545, 138, 275, 419, 520, 431, 437,416 ,174, 988 ,687, 881};
	int n=100,choice,i,x,y,z;
	
    printf("\n Array before sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d",*(arr+i));
    }
    
    x = selection_sort(arr,n);
    y = bubble_sort(arr,n);
    z = insertion_sort(arr,n);
    printf("\n\n Selection Sort no. of comparisons: %d\n\n Bubble Sort no. of comparisons: %d\n\n Insertion Sort no. of comparisons: %d\n",x,y,z);
    return 0;
}

int selection_sort(int* a, int n)
{
    int i,j,min,temp,count=0, arr[max]; 
    for ( i = 0; i < n; i++)
        arr[i] = a[i];  
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        count++;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    } 
    printf("\n\n Array after selection sorting: \n");
    		for(i=0;i<n;i++)
			{
				printf(" %d\t",*(arr+i));
    		}  
    return count;
}

int bubble_sort(int *a, int n)
{
    int temp,i,j, count = 0, arr[n];
    for (i = 0; i < n; i++)
        arr[i] = a[i];

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
               temp = *(arr+j);
               *(arr+j) = *(arr+j+1);
               *(arr+j+1) = temp;
               count++;
            }
        }
        
    }
    printf("\n\n Array after bubble sorting: \n");
    		for(i=0;i<n;i++)
			{
				printf(" %d\t",*(arr+i));
    		}  		
    return count;
}


int insertion_sort(int* a, int n)
{
    int key, i,j,arr[n],count=0;
    for (i = 0; i < n; i++)
        arr[i] = a[i];
    for (i = 1; i < n; i++) 
    {
        key = *(arr+i);
        j = i - 1;
        while (j >= 0 && *(arr+j) > key)
        {
            *(arr+j+1) = *(arr+j);
            j--;
			count++;
        }
        *(arr+j+1) = key;
    }
   printf("\n\n Array after insertion sorting: \n");
    		for(i=0;i<n;i++)
			{
				printf(" %d\t",*(arr+i));
    		}
    return count;
}
