#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n =600851475143;
    
    int ans=0;
    
    for(long long int i=2; i*i<=n; i++)
    {
        while(n%i==0 && n!=i)
        {
            // ans = i;
            n = n/i;
        }
    }
    
    // if(n>1)
        cout << "num: " << n;
    // else
    //     cout << "num: " << ans;
    return 0;
}