#include <iostream>
using namespace std;
struct card
{
    int  face;
    int shape;
    int color;
}s1,s2,s3;//these are the structures
int main()
{

    struct card c[52]={{1,3,4}};
    cout<<c[0].face<<endl;
}
