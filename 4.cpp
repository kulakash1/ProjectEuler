#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=3;
    // if(n==1) return 9;
        long long int high = pow(10,n)-1, low = pow(10,n-1);
        long long int ans=0;
        long long int y;

        for(long long int i=high; i>=low; i--)
        {
            string s = to_string(i);
            string rev = s;

            reverse(rev.begin(), rev.end());

            s += rev;

            y = stol(s);

            for(int j= high; j>=sqrt(y); j--)
            {
                if(y%j==0)
                {
                    ans = y;
                    break;
                }
            }
            if(ans!=0)
            {
                break;
            }
        }
        
    cout << "Max Palindrome Number made from product of 2 " << n<< "-digit \nnum: " << ans;
    return 0;
}