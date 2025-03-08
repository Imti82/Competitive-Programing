#include<bits/stdc++.h>
using namespace std;

int main()
{
    string X,Y;
    cin >> X >> Y;
    cout<<X.length()<<" "<<Y.length()<<endl;

    cout<<X+Y<<endl;

    char temp=X[0];
    X[0]=Y[0];
    Y[0]=temp;
    cout<<X<<" "<<Y<<endl;

    return 0;


}