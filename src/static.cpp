#include <iostream>
using namespace std;

void sayideger() {
    static int i = 0;
    i++;
    cout << "i'nin degeri: " << i << endl;
}

class Gamer {
public:
    static int gamers;

    Gamer () {
        gamers++;
        cout << "new player joined..." << endl;
    }
};

int Gamer::gamers = 0;

class Matematik {
public:
    
    static void cube (int x) {
        cout << x*x*x << endl;
    }
    static void add6 (int x) {
        cout << x + 5 << endl;
    }

};

int main () {

    /*sayideger();
    sayideger();
    sayideger();
    sayideger();*/

    Gamer gamer1;
    Gamer gamer2;
    Gamer gamer3;
    Gamer gamer4;
    cout << Gamer::gamers << endl;

    Matematik::cube(3);
    Matematik::cube(5);
    Matematik::add6(10);

    return 0;

}