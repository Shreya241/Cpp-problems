/*Create a class of 3D vectors called.Include methods for finding magnitude, cross product, dot product, angle with another vector and the vector
projection of the given vector on another.*/

#include <cmath>
#include <iostream>
using namespace std;

class Vector {
private:
    int x, y, z;
    // Components of the Vector

public:
    Vector(int x, int y, int z)
    {
        // Constructor
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector operator+(Vector v); // ADD 2 Vectors
    Vector operator-(Vector v); // Subtraction
    int operator^(Vector v); // Dot Product
    Vector operator*(Vector v); // Cross Product
    float magnitude()
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }
    friend ostream& operator<<(ostream& out, const Vector& v);
    // To output the Vector
    


    
};

// Addition of vectors
Vector Vector::operator+(Vector v)
{
    int x1, y1, z1;
    x1 = x + v.x;
    y1 = y + v.y;
    z1 = z + v.z;
    return Vector(x1, y1, z1);
}

// Subtraction of vectors
Vector Vector::operator-(Vector v)
{
    int x1, y1, z1;
    x1 = x - v.x;
    y1 = y - v.y;
    z1 = z - v.z;
    return Vector(x1, y1, z1);
}

// Dot product of vectors
int Vector::operator^(Vector v)
{
    int x1, y1, z1;
    x1 = x * v.x;
    y1 = y * v.y;
    z1 = z * v.z;
    return (x1 + y1 + z1);
}

// Cross product of vectors
Vector Vector::operator*(Vector v)
{
    int x1, y1, z1;
    x1 = y * v.z - z * v.y;
    y1 = z * v.x - x * v.z;
    z1 = x * v.y - y * v.x;
    return Vector(x1, y1, z1);
}

// Display Vector
ostream& operator<<(ostream& out, const Vector& v)
{
    out << v.x << "i ";
    if (v.y >= 0)
        out << "+ ";
    out << v.y << "j ";
    if (v.z >= 0)
        out << "+ ";
    out << v.z << "k" << endl;
    return out;
}

// Driver program
int main()
{
    // Let us Take the vector quantites :
    // V1 = 3i + 4j + 2k
    // V2 = 6i + 3j + 9k
    Vector V1(1, 1, 2), V2(2, 3, 4);

    cout << "V1 = " << V1;
    cout << "V2 = " << V2;
    float mag1=V1.magnitude();
    float mag2=V2.magnitude();
    
    cout << "Dot Product is : " << (V1 ^ V2)<<endl;
    cout << "Cross Product is : " << (V1 * V2)<<endl;
    cout<<"Magnitude of V1 : "<<mag1<<endl; 
    cout<<"Angle btween V1 and V2 is : "<<acos((V1^V2)/(mag1*mag2))<<endl;
    cout<<"Projection of V1 on V2 is :"<<((V1^V2)/mag2);
    return 0;
}
