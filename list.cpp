#include <iostream>
#include <list>
using namespace std;

int main(){
    list <string> fruits = {"pineapple", "apple", "berry", "avocado"};
    fruits.push_front("melon");
//cannot using
// cout << fruits.back();
// cout << fruits.front();
  for(string fruit: fruits){
        cout<< fruit<<"\n";
  }
}