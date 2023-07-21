//string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="ayushi";
    cout<<s1<<endl;

    //subscript operator
    for(int i=0;i<s1.size();i++)
    cout<<s1[i]<<" ";
    cout<<endl;

    //at operator
    for(int i=0;i<s1.size();i++)
    cout<<s1.at(i)<<" ";
    cout<<endl;

    //implicit iterator
    for(auto x:s1)
    cout<<x<<" ";
    cout<<endl;

    ///explicit iterator
    string::iterator i1;
    for(i1=s1.begin();i1!=s1.end();i1++)   //random access
    cout<<*i1<<" ";
    cout<<endl;


    cout<<s1.front()<<endl;
    cout<<s1.back()<<endl;
    cout<<s1.size()<<endl;
    s1.append(" nitian");
    cout<<s1<<endl;
    s1.insert(6,"riya");
    cout<<s1<<endl;
    s1.replace(6,4,"cse");
    cout<<s1<<endl;
    cout<<s1.substr(6,7); //6 seleke 7 char ko print karo ek substring bnakr
    s1=s1+" ji"; //concatination
    cout<<s1<<endl;


}


