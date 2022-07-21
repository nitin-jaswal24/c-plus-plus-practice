#include <iostream>
using namespace std;
void BinarySearch(int arr[],int s)
{
    bool isFound=false;
    cout<<"enter the element you want to search"<<endl;
    int ele;
    cin>>ele;
    for(int i=0;i<s;i++)
    {

        if(arr[i]==ele)
        {

            isFound=true;


        }

    }

    if(isFound)
    {
        cout<<"element  found "<<endl;
    }
    else{
        cout<<"element is not in the index"<<endl;
    }




}

int main()
{
    bool isFound=true;
    cout<<"enter the number of elements you want to search"<<endl;
    int n;
    cin>>n;
    int *p;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    BinarySearch(p,n);


}
