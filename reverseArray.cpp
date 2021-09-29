#include<iostream>
using namespace std;
void arrayReverse(int A[],int n);

int main()
{
     int arr[50], size;
     cout<<"Enter array size: ";
     cin>>size;
     cout<<"Enter array elements:\n";
     for(int i=0;i<size;i++)
     cin>>arr[i];
     cout<<"Entered array: ";
     for(int i=0;i<size;i++)
     cout<<arr[i]<<" ";
     arrayReverse(arr,size);
     cout<<"\nReversed array: ";
     for(int i=0;i<size;i++)
     cout<<arr[i]<<" ";
     return 0;
}

void arrayReverse(int A[],int n)
{
    int temp;
    for(int i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}