#include <iostream>

using namespace std;
int fun(int x)
{
if(x>0)
{
        fun(x-1);
        cout<<x<<endl;


}
}


int main()
{
    int x;
    cout<<"enter the value to perform the recursion:"<<endl;
    cin>>x;
    fun(x);
}
