#include <iostream>
#include <vector>
using namespace std;
void fun(int ind, vector <int> &ds,int arr[],int n)
{

    if(ind>=n)
    {
        for(auto x:ds)
        {

            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    fun(ind+1,ds,arr,n);
    ds.pop_back();
    fun(ind+1,ds,arr,n);
}
int main()
{
int arr[]={3,2,1};
vector <int> ds;
fun(0,ds,arr,3);
return 0;

}
