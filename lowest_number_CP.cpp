#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int A[N]; 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int lowest = A[0]; 
    int position = 1;  

    for (int i = 1; i < N; i++) {
        if (A[i] < lowest) {
            lowest = A[i]; 
            position = i + 1; 
        }
    }

    cout << lowest << " " << position << endl;
    return 0;
}
