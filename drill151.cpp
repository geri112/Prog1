#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
class Person{
    public:
            Person(){};
            Person(string f, string l, int a):f{f}, l{l},a{a}{
                if(a<0||a>=150){
                    throw runtime_error("Invalid age");
                }
                string n = f+l;
                for(int i=0; i <= n.length(); i++){
                if(n[i]==';' || n[i]==':' || n[i]=='"'  || n[i]=='['||n[i]==']'||n[i]=='*'||n[i]=='&'||n[i]=='^'||n[i]=='%'||n[i]=='$'||n[i]=='#'||n[i]=='@'|| n[i]=='!'){
                     throw runtime_error("Invalid name");
                }
            }
            //vagy
            /*
            for(int i=0; i <= n.length(); i++){
                switch(n[i]){
                    case(';'):
                    case(':'):
                    ...
                        thwo runtime_error("invalid name");
                        break;
                        default:
                        break;
                }
            }*/
            };
            //string name()const{return n;}
            string first_name()const{return f;}
            string last_name()const{return l;}
            int age()const{return a;}
    private:
                int a;
               // string n;
            string f;
            string l;
          /* string name = "";
            int age=0;
            Person(string n,int a): name("Goofy"), age(63){};*/
        
};

ostream&/*output stream*/ operator<< (ostream& os, const Person& p){ // bineáris paraméter ha 2 vagy több paramétere van egyébként ?buneáris?
    return os << p.first_name() << " " << p.last_name() << " " << p.age();
}


istream& operator>> (istream& is,Person& p){
    string f;
    string l;
    int a;
    is >> f >> l >> a;

    p = Person(f,l,a);
    return is;
}

int main(){
    //Person p;
    Person p("Goofy","Lajos", 63);
   // p.n="Goofy";
   // p.a=63;
    cout << p.first_name() << " "<< p.last_name() << " " << p.age() << endl;

    Person p2;
    cin >> p2;
    cout << p2 <<endl ;

    vector<Person> vec;
    for(Person p; cin>>p;){ // vagy while(cin>>p)
        if(p.first_name() == "end")break;
        vec.push_back(p);
    }
    for(Person p:vec){
        cout << p << endl;
    }
}
