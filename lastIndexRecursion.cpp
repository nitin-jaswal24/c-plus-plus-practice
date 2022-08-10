#include <iostream>
using namespace std;
int lastIndex(int input[], int size, int x) {

  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.

  */


    if(size==0)
    {
        return -1;
    }
    if(input[size-1]==x)
    {
        return size-1;
    }

    int ans=lastIndex(input+1,size-1,x);
    if(ans!=-1)
    {

        return ans-size;
    }



}
int main()
{

    int arr[5]={1,2,3,2,4};
    cout<<lastIndex(arr,5,2);

}
