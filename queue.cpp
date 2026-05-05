#include <iostream>
#include <queue>
using namespace std;

int main(){
    // FIFO
    queue<string> cars;
    cars.push("audi");
    cars.push("mazda");
    cars.push("demio");
    cout<<cars.back();
    cout<<cars.front();


}