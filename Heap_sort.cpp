
#include<bits/stdc++.h>
using namespace std;

//function to convert given array into heap

void heapify(int arr[],int n,int i)
{
    int maximum=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[maximum])maximum=left;
    if(right<n && arr[right]>arr[maximum])maximum=right;
    if(maximum!=i)
    {
        swap(arr[i],arr[maximum]);
        heapify(arr,n,maximum);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int i;
    int arr[]={12,11,13,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

