#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int maxk, mink, ar[20], size, k;
    cout<<"Enter array size: ";
    cin>>size;
    cout<<"Enter array elements:\n";
    for(int i=0;i<size;i++)
    cin>>ar[i];
    cout<<"Enter the value of k: ";
    cin>>k;
    sort(ar,ar+size);
    mink=ar[k-1];
    maxk=ar[size-k];
    cout<<"kth minimum element of the array is "<<mink<<" and "<<"kth maximum element is "<<maxk;
    return 0;
 }