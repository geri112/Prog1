#include <iostream>
#include <functional>

int sum(int x, int y){
    return x+y;
};

class Add{
    public:
        int operator()(int x, int y)const{
            return x+y;
        }
};

struct add_x{ //funktor
    add_x(int val) : x(val) {} // új konstruktúr példány ez igy neéz ki add_x(int val){x = val}
    int operator()(int y) const {
            return x+y;
        }
    private:
        int x;
};
//int func(int a, int b)

using namespace std;
int main(){

    add_x add42(42);
    int i = add42(8);
    cout << i << endl;

    std::function<int(int, int)> func;
    func = sum;
    cout << func(5,7) << endl;

    std:function<double(double, double)> sum = [](double A, double B){
        return A+ B;
    };
    cout << sum(4.6, 5.9) << endl;





}