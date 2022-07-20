#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size for the array"<<endl;
    cin>>size;
    int *A;
    A=new int [size];
    cout<<"enter the number of elements you want in the array"<<endl;
    int nums;
    cin>>nums;
    if(nums<=size)
    {
        for(int i=0;i<nums;i++)
        {

            cin>>A[i];
        }
        int index;
        cout<<"what index you want to remove"<<endl;
        cin>>index;
        for(int i=index;i<nums-1;i++)
        {
            A[i]=A[i+1];

        }
        nums-=1;
        for(int i=0;i<nums;i++)
        {

            cout<<A[i]<<" ";
        }
    }
    else{
        cout<<"out of range"<<endl;
    }





}
