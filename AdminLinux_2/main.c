#include <stdio.h>
int binary_search(int *arr,int size,int num);

void main()
{
int arr[5]={4,9,2,5,1};
int i;
i=binary_search(arr,5,5);
printf("arr[5]={4,9,2,5,1}\n");
printf("5 is at index %d\n",i);
}

int binary_search(int *arr, int size, int num)
{
int i,low=0,high=size-1,mid;

while(high>=low)
{
mid=(high+low)/2;
if(arr[mid]>num)
high=mid-1;
else if(arr[mid]<num)
low=mid+1;
else
return mid;
}
return -1;
} 
