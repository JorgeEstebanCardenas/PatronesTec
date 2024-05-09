#include <iostream>

using namespace std;


class Shape {
public:
    float X;
    float Y;

    string color;

    Shape(float startX, float startY, string startColor){
        X = startX;
        Y = startY;

        color = startColor;
    }


    virtual float Area() { return -1.0; }
};



class Square : public Shape {
public:

    float SideLenght;

    Square(float startSideLenght, float startX, float startY, string startColor) 
    : Shape(startX, startY, startColor) {
        
        SideLenght = startSideLenght;
    }

    float Area(){
        return SideLenght * SideLenght;
    }

};

class Circle : public Shape {
public:

    float Radius;

    Circle(float startRadius, float startX, float startY, string startColor)
    : Shape(startX, startY, startColor){

        Radius = startRadius;

    }

    float Area(){
        return 3.1416 * Radius * Radius;
    }

};





int main(){

    Square s = Square(2.0, 1.0, 1.0, "Rojo");

    Circle c = Circle(1.0, 1.0, 2.0, "Azul");



    cout << "Area of square: " << s.Area() << endl;
    cout << "Area of circle: " << c.Area() << endl;



    return 0;
};