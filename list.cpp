#include <iostream>
#include <list>
using namespace std;
// cannot use an index to loop thr a list or access elements
int main(){
    list <string> fruits = {"pineapple", "apple", "berry", "avocado"};
    fruits.push_front("melon");

// cout << fruits.back();
// cout << fruits.front();
  for(string fruit: fruits){
        cout<< fruit<<"\n";
  }
}