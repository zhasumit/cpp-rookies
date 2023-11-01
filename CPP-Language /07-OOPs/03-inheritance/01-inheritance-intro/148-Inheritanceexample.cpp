// make a class cuboid which is derived of class rectangle
#include <iostream>
#include <math.h>

using namespace std;
class rectangle
{
private:
    float length, breadth, height;

public:
    // constructors
    rectangle(float len = 1, float wid = 1)
    {
        setLength(len);
        setBreadth(wid);
    }
    rectangle(rectangle &rect)
    {
        this->length = rect.length;
        this->breadth = rect.breadth;
    }

    // mutators
    void setLength(float length)
    {
        if (length > 0)
            this->length = length;
        else
        {
            this->length = 1;
            cout << "Length cant be negative\n";
        }
    }
    void setBreadth(float breadth)
    {
        if (breadth > 0)
            this->breadth = breadth;
        else
        {
            this->breadth = 1;
            cout << "Breadth cant be negative\n";
        }
    }

    // accessors
    float getLength()
    {
        return length;
    }
    float getbreadth()
    {
        return breadth;
    }

    // facilators
    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return (2 * (length + breadth));
    }
    float diagonal()
    {
        return (sqrt((length * length) + (breadth * breadth)));
    }

    // enquiry
    bool isSquare()
    {
        if (length == breadth)
        {
            cout << "SQUARE\t";
            return true;
        }
        else
        {
            cout << "NOT square\t";
            return false;
        }
    }

    // destructors
    // ~rectangle();
};
class cuboid : public rectangle
{
private:
    int height;

public:
    // constructors
    cuboid(float len = 1, float wid = 1, float tall = 1)
    {
        setHeight(tall);
        setLength(len);
        setBreadth(wid);
    }

    cuboid(cuboid &CC)
    {
        setLength(CC.getLength());
        setBreadth(CC.getbreadth());
        height = CC.getHeight();
    }

    // mutators
    void setHeight(float tall)
    {
        if (tall > 0)
            this->height = tall;
        else
        {
            this->height = 1;
            cout << "Height cant be negative\n";
        }
    }

    // accessors
    float getHeight()
    {
        return height;
    }

    // facilators
    float volume()
    {
        return getLength() * getbreadth() * height;
    }
    float TSA()
    {
        float len = getLength(), wid = getbreadth(), tall = getHeight();
        return (2 * ((len * wid) + (wid * tall) + (tall * len)));
    }
    float LSA()
    {
        float len = getLength(), wid = getbreadth(), tall = getHeight();
        return (2 * tall * (len + wid));
    }
    float Diagonal()
    {
        float len = getLength(), wid = getbreadth(), tall = getHeight();
        return (sqrt((len * len) + (wid * wid) + (tall * tall)));
    }

    // enquiry
    bool IsCube()
    {
        if ((getLength() == getbreadth()) && (getLength() == getHeight()))
        {
            cout << "CUBE\t";
            return true;
        }
        else
        {
            cout << "NOT cube\t";
            return false;
        }
    }

    // destructors
    // ~cubiod();
};
int main()
{
    cout << "=====================================\n";
    float len, wid;
    cout << "Enter Length  : ";
    cin >> len;

    cout << "Enter Breadth : ";
    cin >> wid;
    cout << "=====================================\n";

    rectangle r;
    cout << "\n\nParametrised args : r()\n";
    cout << "Length       : " << r.getLength() << endl;
    cout << "breadth      : " << r.getbreadth() << endl;
    cout << "issquare     : " << r.isSquare() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;
    cout << "Diagonal  : " << r.diagonal() << "\n\n";

    rectangle r1(len);
    cout << "\n\nParametrised args : r1(len)\n";
    cout << "Length       : " << r1.getLength() << endl;
    cout << "breadth      : " << r1.getbreadth() << endl;
    cout << "issquare     : " << r1.isSquare() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r1.area() << endl;
    cout << "Perimeter : " << r1.perimeter() << endl;
    cout << "Diagonal  : " << r1.diagonal() << "\n\n";

    rectangle r2(wid);
    cout << "\n\nParametrised args : r2(wid)\n";
    cout << "Length       : " << r2.getLength() << endl;
    cout << "breadth      : " << r2.getbreadth() << endl;
    cout << "issquare     : " << r2.isSquare() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r2.area() << endl;
    cout << "Perimeter : " << r2.perimeter() << endl;
    cout << "Diagonal  : " << r2.diagonal() << "\n\n";

    rectangle r3(len, wid);
    cout << "\n\nParametrised args : r3(len, wid)\n";
    cout << "Length       : " << r3.getLength() << endl;
    cout << "breadth      : " << r3.getbreadth() << endl;
    cout << "issquare     : " << r3.isSquare() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << r3.area() << endl;
    cout << "Perimeter : " << r3.perimeter() << endl;
    cout << "Diagonal  : " << r3.diagonal() << "\n\n";

    rectangle R(15, 7);
    rectangle copy(R);
    cout << "\n\nCopy constructor : copy(R) \n";
    cout << "Length       : " << copy.getLength() << endl;
    cout << "breadth      : " << copy.getbreadth() << endl;
    cout << "issquare     : " << copy.isSquare() << endl;
    cout << "-------------------------------------\n";
    cout << "Area      : " << copy.area() << endl;
    cout << "Perimeter : " << copy.perimeter() << endl;
    cout << "Diagonal  : " << copy.diagonal() << "\n\n";

    cout << "=====================================\n";
    float tall;
    cout << "Enter Length  : ";
    cin >> len;

    cout << "Enter Breadth : ";
    cin >> wid;

    cout << "Enter Height  : ";
    cin >> tall;
    cout << "=====================================\n";

    cuboid c;
    cout << "\n\nParametrised args : c()\n";
    cout << "Length       : " << c.getLength() << endl;
    cout << "Breadth      : " << c.getbreadth() << endl;
    cout << "Height       : " << c.getHeight() << endl;
    cout << "iscube ?     : " << c.IsCube() << endl;
    cout << "-------------------------------------\n";
    cout << "Area       : " << c.area() << endl;
    cout << "Perimeter  : " << c.perimeter() << endl;
    cout << "Diagonal 2d: " << c.diagonal() << endl;
    cout << "LSA        : " << c.LSA() << endl;
    cout << "TSA        : " << c.TSA() << endl;
    cout << "Diagonal 3d: " << c.diagonal() << endl;
    cout << "Volume     : " << c.volume() << "\n\n";

    cuboid c1(len);
    cout << "\n\nParametrised args : c1(len)\n";
    cout << "Length       : " << c1.getLength() << endl;
    cout << "Breadth      : " << c1.getbreadth() << endl;
    cout << "Height       : " << c1.getHeight() << endl;
    cout << "iscube ?     : " << c1.IsCube() << endl;
    cout << "-------------------------------------\n";
    cout << "Area       : " << c1.area() << endl;
    cout << "Perimeter  : " << c1.perimeter() << endl;
    cout << "Diagonal 2d: " << c1.diagonal() << endl;
    cout << "LSA        : " << c1.LSA() << endl;
    cout << "TSA        : " << c1.TSA() << endl;
    cout << "Diagonal 3d: " << c1.diagonal() << endl;
    cout << "Volume     : " << c1.volume() << "\n\n";

    cuboid c2(len, wid);
    cout << "\n\nParametrised args : c2(len, wid)\n";
    cout << "Length       : " << c2.getLength() << endl;
    cout << "Breadth      : " << c2.getbreadth() << endl;
    cout << "Height       : " << c2.getHeight() << endl;
    cout << "iscube ?     : " << c2.IsCube() << endl;
    cout << "-------------------------------------\n";
    cout << "Area       : " << c2.area() << endl;
    cout << "Perimeter  : " << c2.perimeter() << endl;
    cout << "Diagonal 2d: " << c2.diagonal() << endl;
    cout << "LSA        : " << c2.LSA() << endl;
    cout << "TSA        : " << c2.TSA() << endl;
    cout << "Diagonal 3d: " << c2.diagonal() << endl;
    cout << "Volume     : " << c2.volume() << "\n\n";

    cuboid c3(len, wid, tall);
    cout << "\n\nParametrised args : c3(len, wid, tall)\n";
    cout << "Length       : " << c3.getLength() << endl;
    cout << "Breadth      : " << c3.getbreadth() << endl;
    cout << "Height       : " << c3.getHeight() << endl;
    cout << "iscube ?     : " << c3.IsCube() << endl;
    cout << "-------------------------------------\n";
    cout << "Area       : " << c3.area() << endl;
    cout << "Perimeter  : " << c3.perimeter() << endl;
    cout << "Diagonal 2d: " << c3.diagonal() << endl;
    cout << "LSA        : " << c3.LSA() << endl;
    cout << "TSA        : " << c3.TSA() << endl;
    cout << "Diagonal 3d: " << c3.diagonal() << endl;
    cout << "Volume     : " << c3.volume() << "\n\n";

    cuboid C(15, 7, 9);
    cuboid CC(C);
    cout << "\n\nParametrised args : CC(C)\n";
    cout << "Length       : " << CC.getLength() << endl;
    cout << "Breadth      : " << CC.getbreadth() << endl;
    cout << "Height       : " << CC.getHeight() << endl;
    cout << "iscube ?     : " << CC.IsCube() << endl;
    cout << "-------------------------------------\n";
    cout << "Area       : " << CC.area() << endl;
    cout << "Perimeter  : " << CC.perimeter() << endl;
    cout << "Diagonal 2d: " << CC.diagonal() << endl;
    cout << "LSA        : " << CC.LSA() << endl;
    cout << "TSA        : " << CC.TSA() << endl;
    cout << "Diagonal 3d: " << CC.diagonal() << endl;
    cout << "Volume     : " << CC.volume() << "\n\n";

    return 0;
}