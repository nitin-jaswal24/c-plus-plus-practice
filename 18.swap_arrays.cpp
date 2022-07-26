#include <iostream>
using namespace std;
int main()
{
    int arr1[2]={1,2};
    int arr_temp[2];
    int arr2[2]={3,4};
    for(int i=0;i<2;i++)
    {
        arr_temp[i]=arr1[i];
    }
    for(int i=0;i<2;i++)
    {
       arr1[i]=arr2[i];


    }
    for(int i=0;i<2;i++)
    {
        arr2[i]=arr_temp[i];
    }
    cout<<"the arr 1 is "<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"the array 2 is "<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<arr2[i]<<endl;
    }

}
