#include <iostream>
using namespace std;
class complex
{
    private:
    int real;
    int imaginary;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    complex add(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;

    }
    void display()
    {
        cout<<real<<" i "<<imaginary<<endl;
    }
};
int main()
{
    complex c1(2,3),c2(3,4),c3;
    c3=c1.add(c2);
    c3.display();
    
}