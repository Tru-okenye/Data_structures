#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque <string> cars={"volvo", "audi", "BMW"};
    cars.push_back("mazda");
    cars.push_front("subaru");

    for(string car: cars){
        cout<<car <<"\n";
    }
} 
