#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int sum =0;
    
    for(int i =1; i<n; i++)
    {
        if(i%3==0 && i%15!=0)
        {
            sum += i;
        }
        else if( ( i%5==0))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
