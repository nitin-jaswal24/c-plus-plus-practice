
#include <iostream>
using namespace std;
void  name(int n)
{

    if(n>5)
    {
    return;
    }
    else{
        name(n+1);
        cout<<"Nitin"<<endl;
    }
}
int main()
{
    name(3);
}
