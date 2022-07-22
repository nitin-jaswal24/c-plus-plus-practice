#include <iostream>
using namespace std;
void fun(int m,int n)
{
    if(m>n)
    {
        return;

    }
    else{

        fun( m+1, n);
        cout<<m<<endl;
    }
}
int main()
{
fun(1,4);
}
