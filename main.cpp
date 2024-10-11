#include <iostream>


class A{
private:
    int _a = 100;
public:
    A(){
        std :: cout << "Default constr a()" << std :: endl;
    }      
    A(int a){
        _a = a;
        std :: cout << "Pat const A(a)" << std :: endl;
    }
};

class B{
private:
    A _A;
public:
    B(int a){
        _A = A(a);
        std :: cout << "Par B(a)" << std :: endl;
    }    
};

int multy_2(int a){
    return a << 1;
}


int main(){
    B b(5);

    return 0;
};
