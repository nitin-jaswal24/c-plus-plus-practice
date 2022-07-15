#include <iostream>
using namespace std;
int sumo=0;
int sum(int i,int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    sumo+=arr[i];
    sum(i+1,arr,n-1);
return sumo;
}
int main()
{
int arr[4]={1,2,3,20};
cout<<sum(0,arr,4);
}
