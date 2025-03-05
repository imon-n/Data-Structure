#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> myList;

    // 1. Insert at the Front (Push Front)
    myList.push_front(10);
    
    // 2. Insert at the End (Push Back)
    myList.push_back(20);
    
    // 3. Insert at a Specific Position (using iterator)
    auto it = myList.begin();
    advance(it, 1);  // Move iterator to 2nd position
    myList.insert(it, 15);  // Insert 15 at 2nd position

    // 4. Print the list
    cout << "List elements: ";
    for (int val : myList)
        cout << val << " ";

   
    return 0;
}