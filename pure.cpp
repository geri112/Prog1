#include <iostream>
#include <cmath>

/*int absolute(int a){    //ez így tiszta függvény
    return abs(a);
};*/
int absolute(int a){
    std::cout << "param: "<< a << std::endl;  //így ennek már van mellékhatása
    return abs(a);
};

int main(){
    int a,b;
    a=10;
    std::cout<<"Absolute value: " << abs(0.025) << std::endl; // csak a saját környezete számít nem kommunikál külvilággal. Ez egy tiszta függvény

    std::cout<<"Absolute value: " << absolute(25) << std::endl;

}
