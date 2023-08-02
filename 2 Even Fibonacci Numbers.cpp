#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // WAY 1
    // int n =4000000;
    // int a =33;
    // vector<int> dp(a,-1);
    // dp[1] = 1;
    // dp[2] = 2;
    // int sum = dp[2];
    
    // for(int i=3; true; i++)
    // {
    //     dp[i] = dp[i-1] + dp[i-2];
    //     if(dp[i]>n)
    //     {
    //         // cout << "i: " << i;
    //         break;
    //     }
        
    //     if(dp[i]%2==0)
    //     {
    //         sum += dp[i];
    //     }
    // }
    
    // cout << "sum: " << sum;
    // return 0;
    
    // WAY 2
    int n =4000000;
    // int a =34;
    int a= 1, b = 2,ans;
    int sum = 2;
    
    for(int i=3; true; i++)
    {
        ans = b + a;
        a =b;
        b =ans;
        if(ans>n)
        {
            // cout << "i: " << i;
            break;
        }
        
        if(ans%2==0)
        {
            sum += ans;
        }
    }
    
    cout << "sum: " << sum;
    return 0;
}