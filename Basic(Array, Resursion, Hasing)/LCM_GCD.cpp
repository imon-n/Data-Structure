#include<bits/stdc++.h>
using namespace std;
int main(){
   int A,B;
   cin>>A>>B;
   int a=A,b=B,gcd=1;

   while (A>0 && B>0)
   {
     if(A>B) A = A%B ;
     else B = B % A;

     if(A==0){
        gcd = B;
     }
    else gcd = A;
   }

   int LCM = a*b / gcd;

   cout<<"GCD : "<<gcd<<" LCM : "<<LCM; // 354293 125208
   
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int a,b;
//    cin>>a>>b; 
//     int lcm,gcd;
//    for (int i=min(a,b); i<=a*b; i++)
//    {
//        if(i%a == 0 && i%b == 0){
//         lcm = i;
//         break;
//        }
//    }

//     for (int i=min(a,b); i>=1; i--)
//     {
//         if(a%i==0 && b%i == 0){
//             gcd = i;
//             break;
//         }
//     }

//     cout<<lcm<<" "<<gcd;

//     return 0;
// }