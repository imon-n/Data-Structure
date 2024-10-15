#include<bits/stdc++.h>
using namespace std;

int sum_of_divisors(int n){
    int total = 0;
    for (int i=1; i<=n; i++)
    {
        if(n%i == 0){
            total += i;
        }
    }

    return total;
}


int sum_of_D(int N){
    int total_sum = 0;
    for (int i=1; i<=N; i++)
    {
        total_sum = total_sum + sum_of_divisors(i);
    }

    return total_sum; 
}
int main(){
   int N = 5;
   int output = sum_of_D(N);
   cout<<output;
   
    return 0;
}