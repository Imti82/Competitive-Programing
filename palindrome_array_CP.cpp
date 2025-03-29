#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
for (int i=0; i < N/2; i++){
    if(A[i] != A[N-i-1]){
        cout << "NO" << endl;
        return 0;
    }
}
cout << "YES" << endl;
return 0;
}