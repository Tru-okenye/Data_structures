#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <string> cars = {"volvo", "Audi", "mazda"};
    cars.push_back("demio");//add element to the vector
    cars.pop_back();//remove the last element from the vector
    //cout<<cars.size();//number of elements a vector has

    for(int i =0; i < cars.size(); i++){
        cout<<cars[i]  <<"\n";
    }
    // for(string car: cars){
    //     cout<<car<<"\n";
    // }
    // cout<<cars.at(0);
    // get first and last element
    // cout<<cars.front() <<cars.back();
    //cars[0]="demio";//change element
    // cout<<cars.at(0);
    return 0;

}
