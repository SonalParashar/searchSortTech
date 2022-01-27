//SEQUENTIAL SEARCH
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define LIMIT 10000

int numSearch(int *, int, int);
int main()
{
    int arr[LIMIT], i, n, pos, key;

    printf("\n Enter size of array: ");
    scanf("%d", &n);
    srand(time(0));
    for(i=0;i<n;i++){
        arr[i] = rand()%100;
    }
    key = rand()%100;
    printf("\n");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n Key is %d: ",key);

    pos=numSearch(arr, n, key);
    if(pos!=-1){
        printf("\n %d is placed in position %d\n", key, pos+1);
    }
    else{
        printf("\n %d NOT FOUND\n", key);
    }
    return 0;
}
int numSearch(int *a, int n, int k){
    int i;
    for(i=0;i<n;i++){
        if(*(a+i)==k){
            return i;
        }
    }
    return -1;
}
