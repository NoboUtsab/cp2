#include<bits/stdc++.h>

using namespace std;
int main()
{
    int count=0;
    string s,p;
    getline(cin,s);
    getline(cin,p);

    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        {
            cout<<s[i];
            count++;
        }
    }

    cout<<" ";

    for(int i=0; p[i]!=0; i++)
    {
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' || p[i]=='A' ||p[i]=='E' ||p[i]=='I' ||p[i]=='O' ||p[i]=='U')
        {
            cout<<p[i];
            count++;
        }
    }
    cout<<endl;
    cout<<count;
}
