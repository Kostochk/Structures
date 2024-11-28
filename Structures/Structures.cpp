#include <iostream>

using namespace std;

// Structure for Square
struct Square {
private:
    int side;  // Side length of the square
public:
    // Default constructor
    Square() {
        side = 5;
    }

    // Constructor with parameters
    Square(int side) {
        this->side = side;
    }

    // Method to print square information
    void PrintSquare() {
        cout << "Side: " << side << endl;
    }

    // Method to assign a new side length
    void AssignSideSquare(int side) {
        this->side = side;
    }

    // Method to calculate and display the area
    void SquareArea() {
        cout << "Area: " << side * side << endl;
    }

    // Method to calculate and display the perimeter
    void SquarePerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }
};

// Structure for Rhombus
struct Rhombus {
private:
    int side;   // Side length of the rhombus
    int height; // Height of the rhombus
public:
    // Default constructor
    Rhombus() {
        side = 5;
        height = 4;
    }

    // Constructor with parameters
    Rhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // Method to print rhombus information
    void PrintRhombus() {
        cout << "Side: " << side << ", Height: " << height << endl;
    }

    // Method to assign new side length and height
    void AssignSideHeightRhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // Method to calculate and display the area
    void RhombusArea() {
        cout << "Area: " << side * height << endl;
    }

    // Method to calculate and display the perimeter
    void RhombusPerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }
};

// Structure for Rectangle
struct Rectangle {
private:
    int side1;  // Length of the first side
    int side2;  // Length of the second side
public:
    // Default constructor
    Rectangle() {
        side1 = 5;
        side2 = 4;
    }

    // Constructor with parameters
    Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // Method to print rectangle information
    void PrintRectangle() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << endl;
    }

    // Method to assign new side lengths
    void AssignSide1Side2Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // Method to calculate and display the area
    void RectangleArea() {
        cout << "Area: " << side1 * side2 << endl;
    }

    // Method to calculate and display the perimeter
    void RectanglePerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }
};

// Structure for Trapezoid
struct Trapezoid {
private:
    int side1;   // Length of the first base
    int side2;   // Length of the second base
    int height;  // Height of the trapezoid
public:
    // Default constructor
    Trapezoid() {
        side1 = 5;
        side2 = 4;
        height = 3;
    }

    // Constructor with parameters
    Trapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // Method to print trapezoid information
    void PrintTrapezoid() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << ", Height: " << height << endl;
    }

    // Method to assign new base lengths and height
    void AssignSide1Side2HeightTrapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // Method to calculate and display the area
    void TrapezoidArea() {
        cout << "Area: " << ((side1 + side2) / 2) * height << endl;
    }

    // Method to calculate and display the perimeter
    void TrapezoidPerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }
};

// Main function
int main()
{
    // Demonstrate Square functionality
    cout << "Square: " << endl;
    Square obj;  // Using default constructor
    Square obj2 = Square(9);  // Using parameterized constructor

    obj.PrintSquare();
    obj2.PrintSquare();
    obj.AssignSideSquare(7);  // Updating the side length
    obj.PrintSquare();
    obj.SquareArea();  // Calculating area
    obj.SquarePerimeter();  // Calculating perimeter

    // Demonstrate Rhombus functionality
    cout << "Rhombus: " << endl;
    Rhombus obj3;  // Using default constructor
    Rhombus obj4 = Rhombus(9, 5);  // Using parameterized constructor
    obj3.PrintRhombus();
    obj4.PrintRhombus();
    obj3.AssignSideHeightRhombus(7, 3);  // Updating side length and height
    obj3.PrintRhombus();
    obj3.RhombusArea();  // Calculating area
    obj3.RhombusPerimeter();  // Calculating perimeter

    // Demonstrate Rectangle functionality
    cout << "Rectangle: " << endl;
    Rectangle obj5;  // Using default constructor
    Rectangle obj6 = Rectangle(6, 7);  // Using parameterized constructor

    obj5.PrintRectangle();
    obj6.PrintRectangle();
    obj5.AssignSide1Side2Rectangle(4, 9);  // Updating side lengths
    obj5.PrintRectangle();
    obj5.RectangleArea();  // Calculating area
    obj5.RectanglePerimeter();  // Calculating perimeter

    // Demonstrate Trapezoid functionality
    cout << "Trapezoid: " << endl;
    Trapezoid obj7;  // Using default constructor
    Trapezoid obj8 = Trapezoid(8, 10, 5);  // Using parameterized constructor

    obj7.PrintTrapezoid();
    obj8.PrintTrapezoid();
    obj7.AssignSide1Side2HeightTrapezoid(4, 9, 6);  // Updating dimensions
    obj7.PrintTrapezoid();
    obj7.TrapezoidArea();  // Calculating area
    obj7.TrapezoidPerimeter();  // Calculating perimeter
}
