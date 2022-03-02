//lambda kifejezés

#include <iostream>

/*
    [] lambda introducer(bevezető)
    () argument list
    {} function body

    [] //üres, nem kap el semmit
    [&] capture by reference
    [=] capture by value
    [&A, =B] capture A by reference, B by value
    [=, &A] capture A by reference, everything else by value

*/

using namespace std;
int main(){
    [](){
        std::cout<<"Helllo c++ Lambda" << std::endl;
    }
    ();                                                         // ugyan olyan mint egy függvény

    auto sum = [](double A, double B){
        return A+B;
    };

    auto add = sum;
    cout << add(3.25, 5.65) << endl;

    auto add2 = [](double A, double B) -> double {
        return A+B;
    };

    cout << add2(3.25, 5.65) << endl;

    double pi = 3.1416;

    auto func = [&pi](){
        cout << "Value of pi: " << ++pi << endl;
    };
    func();
            cout << "Value of pi: " << pi << endl;

    auto gene_lambda = [](auto arg) {
        return arg+arg;
    };
    cout << gene_lambda(5) << endl;
    cout << gene_lambda(3.14) << endl;

}
