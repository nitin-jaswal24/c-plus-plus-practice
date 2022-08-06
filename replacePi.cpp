// Change in the given string itself. So no need to return or print anything
#include <iostream>
using namespace std;


void replacePi(string s) {
	// Write your code here
	string output;


    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='p' && s[i+1]=='i')

        {
            output+="3.14";
        }
        else{
            output+=s[i];
        }
    }
    cout<<output<<endl;



}
int main()
{

    string s="helpiq";

    replacePi(s);
}


