//#include <iostream>
//using namespace std;
//int isSorted(int i,int arr[])
//{
//
//    if(i==4)
//    {
//
//        return 1;
//    }
//    else{
//        if(arr[i]<arr[i+1])
//        {
//             isSorted(i+1,arr);
//        }
//        else{
//            return 0;
//        }
//    }
//}
//
//int main()
//{
//    int arr[5]={11,12,134,1234,12345};
//    cout<<isSorted(0,arr);
//}

#include <iostream>
using namespace std;
bool isSorted(int size,int arr[])
{
    if(size==1||size==0)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {

        return false;
    }
    isSorted(size-1,arr+1);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<isSorted(size,arr);

}


