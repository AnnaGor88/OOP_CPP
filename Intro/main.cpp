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
//    Point()
//    {
//        x = y = 0;
//        cout << "DefConstructor:\t" << this << endl;
//    }
//    Point(double x)
//    {
//        this->x=x;
//        this->y=0;
//        cout << "SingleArgumentConstructer: " << this << endl;
//        //конструктор содним параметром отвечает за преобразование типов
//    }
    Point (double x=0, double y=0)
    {
        this ->x =x;
        this ->y =y;
        cout << "Constructor:\t" << this << endl;
    }
    Point (const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
        cout << "CopyConstructor:" << this << endl;
    }
    ~Point()
    {
        cout << "Destructor:\t" << this << endl;
    }
    // Operators:
    Point& operator=(const Point& other)
    {
        this->x = other.x;
        this->y = other.y;
        cout << "CopyAssignment:\t"<< this << endl;
        return *this;
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
void function (Point obj)
{
    cout << obj.get_x() << tab << obj.get_y() << endl;
}

//#define INTRO
//#define CONSTRUCTORS_CHECK

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
#ifdef CONSTRUCTORS_CHECK
    Point A;
    A.print();
    Point B(2,3);
    B.print();
    
    Point C=5; //Single argumeyr constructor
    C.print();
    Point D(8); // Single argument constructor
    D.print();
    int b(3); // Якобы для типа int вызывается конструктор с 1 параметром
    cout << int() << endl; // якобы вызывается конструктор по умолчанию для типо int и возвращает значение по умолчанию для типа int
    // так можно получить значение по умолчанию для любого типа
    Point E{13}; // Single argument constructor
    E.print();
    int c{5};
    cout << c << endl;
    cout << int{} << endl; //значение по умолчанию
    Point F =B;
    F.print();
    Point G; // Default constructor
    G=F; // CopyAssignment (operator=)
#endif
    int a,b,c;
    a=b=c=0;
    Point A, B, C;
    A = B = C = Point();
    return 0;
}
