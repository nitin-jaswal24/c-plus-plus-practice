#include <iostream>
using namespace std;
int fun(int i,string &s)

{
        if(i>=s.size()/2)
        {
            return 1;
        }

            if(s[i]!=s[s.size()-i-1])
            {
                return 0;
            }
            return fun(i+1,s);


}
int main()
{
    string  s;
    cout<<"enter a string to check it is palindrome or not"<<endl;
    cin>>s;
    cout<<fun(0,s);


}
