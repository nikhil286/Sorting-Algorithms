
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int arr[5]={34,1,8,98,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {

        for(j=i+1;j<n;j++)
        {
          if(arr[j]<arr[i])
          {
              swap(arr[i],arr[j]);

          }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
