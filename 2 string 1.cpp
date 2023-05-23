#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s,p;
    getline(cin,s);
    getline(cin,p);
    cout<<s.length()<<endl<<p.length()<<endl;
    cout<<s<<p<<endl;

    swap(s[0],p[0]);
    cout<<s<<" "<<p;


}
