#include <iostream>
using namespace std;

// const = read-only değişken - değiştirilemez...

class Test {
private:
    int a;
public:
    Test (int a) {
        this-> a = a;
    }

    /*void test() {
        cout << "test metodu" << endl;
    }*/
    
    int getValue() const { //Bu metod herhangi bir değeri değiştiremez. Const olmayan metodları çağıramaz.
        //this -> a = 20; // Const olduğu için değişemez
        //test(); // const metod const olmayan metodları çağıramaz.
        return this->a;
    }
};

void test (const Test &test/*kopyalamamak için ptr veya ref*/) { 
    cout << test.getValue() << endl;
    
}

int main () {
    
    //const Test test1(10);
    //cout << test1.a << endl;
    Test test1(10);
    //cout << test1.getValue() << endl;
    test(test1);
    
    return 0;
}