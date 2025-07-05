#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int primeCount[3000];
    for (int i=0;i<=n;++i) {
        primeCount[i] = 0;
    }
    for (int i=2;i<=n;++i) {
        if (primeCount[i] == 0) {
            for (int j=i;j<=n;j+=i) {
                primeCount[j]++;
            }
        }
    }
    
    int almostPrimeCount = 0;
    for (int i=2;i<=n;++i) {
        if (primeCount[i] == 2) {
            almostPrimeCount++;
        }
    }
    cout << almostPrimeCount << endl;
    return 0;
}
