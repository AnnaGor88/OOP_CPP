//
//  main.cpp
//  Intro
//
//  Created by Анна Горячева on 22.03.2021.
//

#include <iostream>
using namespace std;
#define tab "\t"
class Point {
    double x;
    double y;
public:
    double get_x()const
    {
        return x;
    }
    double get_y()const
    {
        return y;
    }
    void set_y(double x){
        this->x=x;
    }
    void set_x(double y){
        this->y=y;
    }
    
    //Constructors:
    Point()
    {
        x = y = 0;
        cout << "DefConstructor:\t" << this << endl;
    }
    Point (double x, double y)
    {
        this ->x =x;
        this ->y =y;
        cout << "Constructor:\t" << this << endl;
    }
    ~Point()
    {
        cout << "Destructor:\t" << this << endl;
    }
 
    //Methods
    void print()const
    {
        cout << "X = " << x << tab << "Y = " << y << endl;
    }
};
void function (Point* p)
{
    cout << p->get_x() << tab << p->get_y() << endl;
}

//#define INTRO

int main() {
    setlocale (LC_ALL, "");
#ifdef INTRO
    Point A; //создаем объект(экземпляр) А структуры  Point
    A.set_x(2);
    A.set_y(3);
    cout << A.get_x()<< tab << A.get_y() << endl;
    Point* pA = &A;
    cout << pA->get_x()<< tab << pA->get_y() << endl;
    cout << sizeof(A) << endl;
    cout << sizeof(pA) << endl;
#endif
    Point A;
    A.print();
    Point B(2,3);
    B.print();
    
    return 0;
}
