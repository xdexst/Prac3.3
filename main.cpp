#include <iostream>
using namespace std;

class Car {
private:
    int x;
    int y;
public:
    Car(int x,int newy) {
        this->x = x;
        this->y = newy;
    }
    void move() {
        x++;
        y++;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    
};

int main() {
    setlocale(LC_ALL, "ru");
    Car car(0,0);
    for (int i = 0; i < 7; i++) {
        car.move();
        cout << "Coordinata X: " << car.getX() << "\tCoordinata Y: " << car.getY() << endl;
    }
    return 0;
}
