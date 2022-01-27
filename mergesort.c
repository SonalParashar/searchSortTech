#include<stdio.h>
#include <time.h>
#define max 1000

void merge_sort(int *,int low,int mid,int high);
void partition(int *,int low,int high);

int main(){

    int i,n, arr[max] = {1, 7, 3, 2, 0, 5, 0, 8};

    printf("\n Enter size of the array: ");
    scanf("%d",&n);
    /*
    srand(time(0));
    for(i=0;i<n;i++)
	{
		arr[i]= rand()%100;
	}
	*/
	printf("\n Array before sorting: ");
	for(i=0;i<n;i++)
	{
		printf(" %d\t", *(arr+i));
	}
	printf("\n");

    partition(arr,0,n-1);

    printf("\n Array after sorting: ");
    for(i=0;i<n;i++){
         printf("\t%d", *(arr+i));
    }
   return 0;
}

void partition(int *a,int low,int high)
{
    int mid;
    if(low<high){
         mid=(low+high)/2;
         partition(a,low,mid);
         partition(a,mid+1,high);
         merge_sort(a,low,mid,high);
    }
}

void merge_sort(int *a,int low,int mid,int high){

    int temp[max],i,m,k,l;
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid) && (m<=high))
	{
         if(*(a+l) <= *(a+m))
		 {
             *(temp+i) = *(a+l);  //temp[i]=arr[l];
             l++;
         }
         else
		 {
             *(temp+i) = *(a+m);  //temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid)
	{
         for(k=m;k<=high;k++){
             *(temp+i) = *(a+k);  //temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++)
		 {
             *(temp+i) = *(a+k);  //temp[i]=arr[k];
             i++;
         }
    }

    for(k=low;k<=high;k++)
	{
		 *(a+k) = *(temp+k);
		  //arr[k]=temp[k];
    }
}
