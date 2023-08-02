#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Optimal Approach: Used AP
    int n;
    cin >> n;

    n = n-1;
        long long int numOfThree =n/3,numOfFive =n/5,numOfFifteen =n/15;
        long long int sumOfThree =0,sumOfFive =0,sumOfFifteen =0;
        
        // Applied AP
        sumOfThree = 3*(numOfThree*(1+numOfThree))/2;
        sumOfFive = 5*(numOfFive*(1+numOfFive))/2;
        sumOfFifteen = 15*(numOfFifteen*(1+numOfFifteen))/2;
    
    
        cout << sumOfThree + sumOfFive - sumOfFifteen << "\n";

        return 0;


    // // Give TLE for big value of n
    // int n;
    // cin >>n;
    // int sum =0;
    
    // for(int i =1; i<n; i++)
    // {
    //     if(i%3==0 && i%15!=0)
    //     {
    //         sum += i;
    //     }
    //     else if( ( i%5==0))
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum;
    // return 0;
}
