#include<iostream>
using namespace std;
int main()
{
    int a[10],low,high,mid,last,flag=0,n;
    cout<<"enter no of elements :\n";
    cin>>n;
    cout<<"enter elemnts :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    low=0;
    high=n-1;
    cout<<"enter element to be searched:\n";
    cin>>x;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x=a[mid])
        {
            flag=1;
            cout<<"elemnt found at "<<mid;
        }
        else if(x>mid)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        if(flag=0)
        {
            cout<<"elemnt not found";
        }
    }
}
