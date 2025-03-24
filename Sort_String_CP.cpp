#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(s[i]>s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}