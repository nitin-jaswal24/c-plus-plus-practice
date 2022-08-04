#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter the size of the arraus"<<endl;
    cin>>m>>n;
    int x=m+n;
    int arr1[m],arr2[n],arr3[x];
    cout<<"enter the first array"<<endl;
    for(int i=0;i<m;i++)
    {

        cin>>arr1[i];
    }

    cout<<"enter the second array"<<endl;
    for(int i=0;i<m;i++)
    {

        cin>>arr2[i];
    }

    cout<<"merging"<<endl;
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    for(;i<m;i++)
    {

        arr3[k++]=arr1[i];
    }
    for(;j<n;j++)
    {

        arr3[k++]=arr2[j];
    }

    for(int i=0;i<x;i++)
    {
        cout<<arr3[i]<<" ";
    }

}
