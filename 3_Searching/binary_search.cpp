#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int value;
    cout<<"Enter the target value : ";
    cin>>value;
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(value>mid)
        {
            low=mid+1;
            mid=(low+high)/2;
        }
        else if(value<mid)
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        else
        {
            cout<<"FOUND !!"<<endl;
            return 0;
        }
    }
    cout<<"NOT FOUND !!";
    return 0;
}
