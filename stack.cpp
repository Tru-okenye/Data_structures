#include <iostream>
#include <stack>
using namespace std;

int main(){
    // you cannot add elements to the stack at the time of declaration
    stack<string> students;
    students.push("ashney");
    students.push("nelson");
    students.push("truphy");
    students.pop();
        cout<<students.top();
}
