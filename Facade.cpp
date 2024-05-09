#include<iostream>

using namespace std;

class Subsystem1 {
public:

    void Operation(string input){
        cout << "Subsystem1 operation input: " << input << endl;
    }

};

class Subsystem2 {
public:

    void Operation(string input){
        cout << "Subsystem2 operation input: " << input << endl;
    }

};


class Facade {
public:

    Subsystem1 System1;
    Subsystem2 System2;

    Facade(Subsystem1 sub1, Subsystem2 sub2){
        System1 = sub1;
        System2 = sub2;
    }


    void Operation(string input){

        cout << "Facade is operating" << endl;

        System1.Operation(input);
        System2.Operation(input);

    }

};


int main(){

    Subsystem1 s1;
    Subsystem2 s2;

    Facade f(s1,s2);

    f.Operation("12345");


    return 0;
}