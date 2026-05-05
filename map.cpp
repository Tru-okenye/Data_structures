#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> students={{"Lorna", 26}, {"richard", 27}};
    students["alex"]=19;
    cout<<students["alex"] << students.at("richard");


    for(auto student: students){
        cout<<student.first<<"is"<<student.second <<endl;
    }
};