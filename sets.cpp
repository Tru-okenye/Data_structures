#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int>numbers= {1,8,7,9,4,3, 1};
    numbers.insert(2);//add element
    numbers.erase(1);
    for(int number: numbers){
        cout<<number <<"\n";
    }
}