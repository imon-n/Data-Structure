#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x; //123
    int val1;
    bool cheak = x < 0;
    int x1 = x;
    x = abs(x);
    int rev = 0;
    while (x != 0) {
        val1 = x % 10; 
        rev = rev*10 + val1;
        x = x / 10; 
    }
    if (x1<0)
    {
       rev = rev * (-1);
    }
    cout<< rev;
    
    return 0;
}
