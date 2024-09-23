#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 1;
   int n1 = n;
   int altemate_value = 0;
   for (int i=0; i<3; i++)
   {
       int v1 = n%10;
       altemate_value = altemate_value + v1 * v1 * v1;
       n = n/10;
   }

   if (n1 == altemate_value)
   {
     cout<<"tr";
   }
   else{
    cout<<"fls";
   }
   
   
    return 0;
}
