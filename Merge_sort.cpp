
#include<bits/stdc++.h>
using namespace std;

//merge function to merge 2 arrays in sorted order

void merging(int arr[],int l,int m,int h)
{
    int n1=m-l+1;
    int n2=h-m;
    int L[n1];int R[n2];
    int i,j;
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;i<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
     i=0;j=0;
     int k=1;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

//recursively calling merge funtion 

void mergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int m=l+(h-l)/2;
         mergeSort(arr,l,m);
         mergeSort(arr,m+1,h);
         merging(arr,l,m,h);
    }
}
int main()
{
    int i;
    int arr[]={12, 11, 13, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
