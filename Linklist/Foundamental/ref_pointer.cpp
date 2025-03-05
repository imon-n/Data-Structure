#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5;
    int *k = &x;   // k = &x = 0x7ffcad2b6f8c       //,   *k = x = 5
    *k = 12; // tarmane *k, er main value ke update kore felbe 

    cout<<&x<<endl;  // &x e sudu x er address
    cout<<*k<<endl;  //,  *k সেই (x er) মেমোরি অ্যাড্রেসের ভ্যালু দেখায় (অর্থাৎ x এর ভ্যালু)।
    cout<<k<<endl;   // k শুধু x এর মেমোরি অ্যাড্রেস রাখে।
    cout<<x;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x = 5;
//     int k = x;
//     k = 12;

//     cout<<x;

//     return 0;
// }