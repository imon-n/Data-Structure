#include<bits/stdc++.h>
using namespace std;
void print(int N){
    if(N==0) return;

    print(N-1);
    cout<<N<<" ";
}
int main(){
   int n = 10;
   print(n);

    return 0;
}