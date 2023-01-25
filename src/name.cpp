#include <iostream>
#include <string>
using namespace std;
string rname;
string nameget() {
    cout << "Please enter your name\n";
    getline(cin, rname);
    return rname;
}