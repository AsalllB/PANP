// Asal.B :>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    cout << ceil(sum / n);
    
    return 0;
}
