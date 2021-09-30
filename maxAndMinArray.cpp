#include<iostream>
using namespace std;

struct arraystruct{
    int min;
    int max;
    void maxmin(int ar[], int n)
   {  
      if(n==1)
        min=max=ar[0];
      else if(n>1)
     { 
       if(ar[0]>ar[1])
       {
           min=ar[1];
           max=ar[0];
       }
       else
           {
               min=ar[0];
               max=ar[1];
           }
   
       for(int i=2;i<n;i++)
       {
           if(ar[i]<min)
           min=ar[i];
           if(ar[i]>max)
           max=ar[i];
       }
    }
}
};

int main()
{
    struct arraystruct obj;
    int ar[50], n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    obj.maxmin(ar,n);
    cout<<"Maximum element of the array is: "<<obj.max<<endl;
    cout<<"Minimum element of the array is: "<<obj.min;
    return 0;
}
 