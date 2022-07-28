#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
        for(int i=1;i<n;i++)
        {

            for(int j=0;j<n-i;j++)
            {

                if(arr[j]>arr[j+1])
                {

                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for(int i=0;i<5;i++)
        {

            cout<<arr[i]<<endl;
        }
}



int main()
{int n;
cin>>n;
int arr[5]={4,3,5,1,2};
bubbleSort(arr,5);



}
