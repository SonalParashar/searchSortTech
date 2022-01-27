#include<stdio.h>

/* Modify the binary search and interpolation search implementations so that,
number of comparisons needed to search the element can be reported to main( )
/ caller function (You can pass the reference of an integer variable to the search
functions which will be updated by the code with number of comparisons). Pass
the following array to both the binary and interpolation search codes to search the
element 651 (key = 651) and print the number of comparisons they made to find
the key. Check whether number of comparison is lesser in binary search than that
of interpolation search.*/

void binary_search(int *,int ,int );
void interpolation_search(int *,int ,int);
int main()
{
    int A[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48,49, 50, 501, 551, 650, 651, 10000000};
    int key=651;
    binary_search(A,55,key);
    interpolation_search(A,55,key);
}
void binary_search(int *a,int n,int key)
{
    int l=0,u=n-1,m,c=0;
    while(l<=u)
    {
       c++;
       m=(l+u)/2;
       if(key==*(a+m))
       {
           printf("\n Binary Search: Key %d found at index %d with total %d search.\n",key,m+1,c);
           return;
       }
       else if(key>*(a+m))
          l=m+1;
       else
          u=m-1;
    }
    printf("\n Search unsuccessful");
}

void interpolation_search(int *a,int n,int key)
{
	int lb,ub,mid,c=0;
	lb=0;
	ub=n-1;
    while((lb<=ub) && (key>=*(a+lb)) && (key<=*(a+ub)))
	{
        mid= lb+(key-*(a+lb))*(ub-lb) / (*(a+ub)-*(a+lb));
        c++;
        if (key == *(a+mid))
        {
        	  printf("\n Interpolation Search: Key %d found at index %d with total %d search.\n",key,mid+1,c);
        	  return;
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
 printf("\n Search unsuccessful");
}
